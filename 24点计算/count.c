#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define TARGET 24
#define EPSILON 1e-6
#define MAX_EXPR_LENGTH 100
#define MAX_STACK_SIZE 100
#define MAX_SOLUTIONS 1000

typedef struct {
    double value;
    char expr[MAX_EXPR_LENGTH];
} Number;

// �жϸ������Ƿ����
int is_equal(double a, double b) {
    return fabs(a - b) < EPSILON;
}

// �������п��ܵı��ʽ
int generate_expressions(double nums[], int n, Number solutions[], int start_idx) {
    if (n == 1) {
        if (is_equal(nums[0], TARGET)) {
            sprintf(solutions[start_idx].expr, "%.0f", nums[0]);
            solutions[start_idx].value = nums[0];
            return 1;
        }
        return 0;
    }

    int count = 0;

    // ö�����п��ܵ�����
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            // ����ʣ�����ֵ�����
            double remaining[3];
            int idx = 0;
            for (int k = 0; k < n; k++) {
                if (k != i && k != j) {
                    remaining[idx++] = nums[k];
                }
            }

            // ö�����п��ܵ������
            for (int op = 0; op < 4; op++) {
                double result;
                char op_char;

                // ���������ĸΪ0�����
                if (op == 3 && nums[j] == 0) continue;

                switch (op) {
                case 0: // +
                    result = nums[i] + nums[j];
                    op_char = '+';
                    break;
                case 1: // -
                    result = nums[i] - nums[j];
                    op_char = '-';
                    break;
                case 2: // *
                    result = nums[i] * nums[j];
                    op_char = '*';
                    break;
                case 3: // /
                    result = nums[i] / nums[j];
                    op_char = '/';
                    break;
                }

                // ������������ʣ������
                remaining[idx] = result;

                // �ݹ����ɱ��ʽ
                count += generate_expressions(remaining, idx + 1, solutions, start_idx + count);
            }
        }
    }

    return count;
}

// ��׺���ʽת��׺���ʽ
void infix_to_postfix(char* infix, char* postfix) {
    char stack[MAX_EXPR_LENGTH];
    int top = -1;
    int j = 0;

    for (int i = 0; infix[i] != '\0'; i++) {
        if (isdigit(infix[i])) {
            // ��������
            while (isdigit(infix[i])) {
                postfix[j++] = infix[i++];
            }
            postfix[j++] = ' ';
            i--;
        }
        else if (infix[i] == '(') {
            // ������ֱ����ջ
            stack[++top] = infix[i];
        }
        else if (infix[i] == ')') {
            // �����ţ�����ջ�������ֱ������������
            while (top >= 0 && stack[top] != '(') {
                postfix[j++] = stack[top--];
                postfix[j++] = ' ';
            }
            if (top >= 0 && stack[top] == '(') top--; // ����������
        }
        else {
            // �����
            while (top >= 0 &&
                ((stack[top] == '*' || stack[top] == '/') ||
                    (stack[top] == '+' || stack[top] == '-') &&
                    (infix[i] == '+' || infix[i] == '-'))) {
                postfix[j++] = stack[top--];
                postfix[j++] = ' ';
            }
            stack[++top] = infix[i];
        }
    }

    // ����ջ��ʣ��������
    while (top >= 0) {
        postfix[j++] = stack[top--];
        postfix[j++] = ' ';
    }

    postfix[j] = '\0';
}

// ����ĸ������ܷ�õ�24
int judge_point24(double nums[], int n) {
    Number solutions[MAX_SOLUTIONS];
    int count = generate_expressions(nums, n, solutions, 0);
    return count > 0;
}

// �������п��ܵ��ĸ�������ϲ�������
void solve_all_and_save(const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("�޷����ļ� %s\n", filename);
        return;
    }

    fprintf(file, "24����Ϸ���пɽ���ϼ��ⷨ\n");
    fprintf(file, "================================\n");

    int total = 0;
    int solvable = 0;

    // �������п��ܵ��ĸ��������(1-10)
    for (int a = 1; a <= 10; a++) {
        for (int b = a; b <= 10; b++) {
            for (int c = b; c <= 10; c++) {
                for (int d = c; d <= 10; d++) {
                    total++;
                    double nums[4] = { a, b, c, d };
                    if (judge_point24(nums, 4)) {
                        solvable++;
                        fprintf(file, "�������: [%d, %d, %d, %d]\n", a, b, c, d);
                        // ������Խ�һ�����ƣ��������Ľⷨ
                        fprintf(file, "�ɽ�\n");
                        fprintf(file, "------------------------------\n");
                    }
                }
            }
        }
    }

    fprintf(file, "\n");
    fprintf(file, "�������: %d\n", total);
    fprintf(file, "�ɽ������: %d\n", solvable);
    fprintf(file, "���ɽ������: %d\n", total - solvable);
    fprintf(file, "�ɽ����: %.2f%%\n", (double)solvable / total * 100);

    fclose(file);
}

int main() {
    // ʾ��������ض����
    double nums[4] = { 1, 2, 5, 3 };
    printf("������� [%.0f, %.0f, %.0f, %.0f] �Ƿ���Եõ�24: %s\n",
        nums[0], nums[1], nums[2], nums[3],
        judge_point24(nums, 4) ? "��" : "��");

    // ���ɲ�����������ϵĽ�
    solve_all_and_save("24_solutions_c.txt");
    printf("������ϵĽ��ѱ��浽24_solutions_c.txt\n");

    return 0;
}