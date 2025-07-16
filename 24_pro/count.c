#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TARGET 24
#define EPSILON 1e-6
#define MAX_EXPR_LEN 200
#define MAX_OP_COMBOS 100000  // ���������ʽ���������ڴ汬ը

typedef struct {
    double nums[4];   // ��ǰ������������֣����4�������������ж�̬���٣�
    int num_count;    // ��ǰ����������4��3��2��1��
    char expr[MAX_EXPR_LEN]; // ��ǰ���ʽ
} CalcState;

// �жϸ��������
int is_equal(double a, double b) {
    return fabs(a - b) < EPSILON;
}

// ����ת�ַ���
void num_to_str(double num, char* str) {
    if (is_equal(floor(num), num)) {
        sprintf(str, "%d", (int)num);
    }
    else {
        sprintf(str, "%.2f", num); // ����ʾ��Ҳ�ɱ���%g
    }
}

// ִ�����㣬������״̬���ѷ��䣬���ֶ��ͷţ�
CalcState* apply_op(CalcState* state, int i, int j, char op) {
    // 1. ���ԭ״̬������Ӱ�����������
    CalcState* new_state = (CalcState*)malloc(sizeof(CalcState));
    memcpy(new_state, state, sizeof(CalcState));

    double a = new_state->nums[i];
    double b = new_state->nums[j];

    // 2. ��nums���Ƴ�a��b������������
    int k, idx = 0;
    double temp_nums[3];
    for (k = 0; k < new_state->num_count; k++) {
        if (k != i && k != j) {
            temp_nums[idx++] = new_state->nums[k];
        }
    }
    new_state->num_count = idx;
    memcpy(new_state->nums, temp_nums, sizeof(double) * idx);

    // 3. ƴ�ӱ��ʽ
    char a_str[MAX_EXPR_LEN], b_str[MAX_EXPR_LEN];
    num_to_str(a, a_str);
    num_to_str(b, b_str);

    switch (op) {
    case '+': new_state->nums[idx] = a + b;
        sprintf(new_state->expr, "(%s+%s)", a_str, b_str); break;
    case '-': new_state->nums[idx] = a - b;
        sprintf(new_state->expr, "(%s-%s)", a_str, b_str); break;
    case '*': new_state->nums[idx] = a * b;
        sprintf(new_state->expr, "(%s*%s)", a_str, b_str); break;
    case '/':
        if (is_equal(b, 0)) { // ���㱣��
            free(new_state);
            return NULL;
        }
        new_state->nums[idx] = a / b;
        sprintf(new_state->expr, "(%s/%s)", a_str, b_str); break;
    default: free(new_state); return NULL;
    }
    new_state->num_count++; // ������������+1����3����������2����+1�����3������
    return new_state;
}

// ������24�����㣬��������ļ�
void solve_24_iterative(double init_nums[4], const char* filename) {
    FILE* fp = fopen(filename, "w");
    if (!fp) {
        printf("�ļ���ʧ�ܣ�%s\n", filename);
        return;
    }

    // ��ʼ�����У�������ģ����У���CalcStateָ�루�ѷ��䣩
    CalcState* queue[MAX_OP_COMBOS];
    int front = 0, rear = 0;

    // ��ʼ״̬��ӣ�4�����֣����ʽΪ�գ����ʼ����ƴ�ӣ�
    CalcState* init_state = (CalcState*)malloc(sizeof(CalcState));
    memcpy(init_state->nums, init_nums, sizeof(double) * 4);
    init_state->num_count = 4;
    sprintf(init_state->expr, "%g,%g,%g,%g", init_nums[0], init_nums[1], init_nums[2], init_nums[3]);
    queue[rear++] = init_state;

    // ����������У�������ȣ�����ݹ�������⣩
    while (front < rear && rear < MAX_OP_COMBOS) {
        CalcState* curr = queue[front++];

        // �ݹ���ֹ������ֻʣ1������
        if (curr->num_count == 1) {
            if (is_equal(curr->nums[0], TARGET)) {
                fprintf(fp, "�ɹ���%s = 24\n", curr->expr);
            }
            else {
                fprintf(fp, "ʧ�ܣ�%s = %.2f\n", curr->expr, curr->nums[0]);
            }
            free(curr); // �ͷŶ��ڴ�
            continue;
        }

        // �����������ֶԺ������
        for (int i = 0; i < curr->num_count; i++) {
            for (int j = 0; j < curr->num_count; j++) {
                if (i == j) continue; // ������ͬ�±�

                char ops[] = "+-*/";
                for (int op_idx = 0; op_idx < 4; op_idx++) {
                    CalcState* next_state = apply_op(curr, i, j, ops[op_idx]);
                    if (next_state) {
                        queue[rear++] = next_state; // ��״̬���
                    }
                }
            }
        }
        free(curr); // �ͷŵ�ǰ״̬�ڴ�
    }

    // �������ʣ��Ԫ�أ���ֹ����MAX_OP_COMBOS��
    while (front < rear) {
        free(queue[front++]);
    }
    fclose(fp);
}

int main() {
    double nums[4];
    printf("������4��1-10�����֣��ո�ָ�����");
    if (scanf("%lf %lf %lf %lf", &nums[0], &nums[1], &nums[2], &nums[3]) != 4) {
        printf("�������\n");
        return 1;
    }

    // ������뷶Χ
    for (int i = 0; i < 4; i++) {
        if (nums[i] < 1 || nums[i] > 10) {
            printf("����%.2f����1-10��Χ��\n", nums[i]);
            return 1;
        }
    }

    // ��������⣬��������ļ�
    solve_24_iterative(nums, "24_result.txt");
    printf("������ɣ�����ѱ�����24_result.txt\n");
    return 0;
}