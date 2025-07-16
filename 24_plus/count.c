#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TARGET 24
#define EPSILON 1e-6
#define MAX_EXPR_LEN 100

typedef struct {
    double value;
    char expr[MAX_EXPR_LEN];
} Result;

// �жϸ������Ƿ����
int is_equal(double a, double b) {
    return fabs(a - b) < EPSILON;
}

// ִ������
Result apply_op(double a, double b, char op) {
    Result res = { 0 };
    char a_str[MAX_EXPR_LEN];
    char b_str[MAX_EXPR_LEN];

    // ������ת���ַ��������������͸�������ʽ
    if (is_equal(floor(a), a)) {
        sprintf(a_str, "%d", (int)a);
    }
    else {
        sprintf(a_str, "%g", a);
    }
    if (is_equal(floor(b), b)) {
        sprintf(b_str, "%d", (int)b);
    }
    else {
        sprintf(b_str, "%g", b);
    }

    switch (op) {
    case '+':
        res.value = a + b;
        sprintf(res.expr, "(%s + %s)", a_str, b_str);
        break;
    case '-':
        res.value = a - b;
        sprintf(res.expr, "(%s - %s)", a_str, b_str);
        break;
    case '*':
        res.value = a * b;
        sprintf(res.expr, "(%s * %s)", a_str, b_str);
        break;
    case '/':
        if (is_equal(b, 0)) {
            strcpy(res.expr, "divide by zero");
            return res;
        }
        res.value = a / b;
        sprintf(res.expr, "(%s / %s)", a_str, b_str);
        break;
    default:
        strcpy(res.expr, "invalid operator");
    }
    return res;
}

// �ж��ܷ�����24
int solve(double nums[], int n, Result* result) {
    if (n == 1) {
        if (is_equal(nums[0], TARGET)) {
            if (is_equal(floor(nums[0]), nums[0])) {
                sprintf(result->expr, "%d", (int)nums[0]);
            }
            else {
                sprintf(result->expr, "%g", nums[0]);
            }
            result->value = nums[0];
            return 1;
        }
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            double next_nums[3];
            int idx = 0;
            for (int k = 0; k < n; k++) {
                if (k != i && k != j) {
                    next_nums[idx++] = nums[k];
                }
            }

            char ops[] = "+-*/";
            for (int op_idx = 0; op_idx < 4; op_idx++) {
                char op = ops[op_idx];
                if ((op == '/' && is_equal(nums[j], 0))) continue;

                Result res = apply_op(nums[i], nums[j], op);
                next_nums[idx] = res.value;

                Result sub_result;
                if (solve(next_nums, idx + 1, &sub_result)) {
                    strcpy(result->expr, sub_result.expr);
                    result->value = sub_result.value;
                    return 1;
                }
            }
        }
    }
    return 0;
}

// �������п��ܵı��ʽ
void generate_expressions(double nums[], int n, FILE* fp) {
    if (n == 1) {
        if (is_equal(floor(nums[0]), nums[0])) {
            fprintf(fp, "%d\n", (int)nums[0]);
        }
        else {
            fprintf(fp, "%g\n", nums[0]);
        }
        return;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            double next_nums[3];
            int idx = 0;
            for (int k = 0; k < n; k++) {
                if (k != i && k != j) {
                    next_nums[idx++] = nums[k];
                }
            }

            char ops[] = "+-*/";
            for (int op_idx = 0; op_idx < 4; op_idx++) {
                char op = ops[op_idx];
                if ((op == '/' && is_equal(nums[j], 0))) continue;

                Result res = apply_op(nums[i], nums[j], op);
                next_nums[idx] = res.value;

                generate_expressions(next_nums, idx + 1, fp);
            }
        }
    }
}

int main() {
    double nums[4];
    printf("������4��1-10֮������֣��ÿո�ָ�����");
    if (scanf("%lf %lf %lf %lf", &nums[0], &nums[1], &nums[2], &nums[3]) != 4) {
        printf("�������������4�����֡�\n");
        return 1;
    }

    // ������������Ƿ���1-10֮��
    for (int i = 0; i < 4; i++) {
        if (nums[i] < 1 || nums[i] > 10) {
            printf("���� %g ����1-10��Χ�ڡ�\n", nums[i]);
            return 1;
        }
    }

    // ����1���ж��ܷ�����24
    Result result;
    if (solve(nums, 4, &result)) {
        printf("���Լ����24�㣬���ʽΪ��%s = 24\n", result.expr);
    }
    else {
        printf("�޷������24�㡣\n");
    }

    // ����2���������п��ܵı��ʽ�����浽�ļ�
    FILE* fp = fopen("expressions.txt", "w");
    if (fp == NULL) {
        printf("�޷����ļ���\n");
        return 1;
    }

    printf("�����������п��ܵı��ʽ�����浽�ļ�...\n");
    generate_expressions(nums, 4, fp);
    fclose(fp);
    printf("���ʽ�ѱ��浽 expressions.txt �ļ��С�\n");

    return 0;
}