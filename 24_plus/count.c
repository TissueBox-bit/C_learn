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

// 判断浮点数是否相等
int is_equal(double a, double b) {
    return fabs(a - b) < EPSILON;
}

// 执行运算
Result apply_op(double a, double b, char op) {
    Result res = { 0 };
    char a_str[MAX_EXPR_LEN];
    char b_str[MAX_EXPR_LEN];

    // 把数字转成字符串，区分整数和浮点数格式
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

// 判断能否计算出24
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

// 生成所有可能的表达式
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
    printf("请输入4个1-10之间的数字（用空格分隔）：");
    if (scanf("%lf %lf %lf %lf", &nums[0], &nums[1], &nums[2], &nums[3]) != 4) {
        printf("输入错误，请输入4个数字。\n");
        return 1;
    }

    // 检查所有数字是否在1-10之间
    for (int i = 0; i < 4; i++) {
        if (nums[i] < 1 || nums[i] > 10) {
            printf("数字 %g 不在1-10范围内。\n", nums[i]);
            return 1;
        }
    }

    // 方法1：判断能否计算出24
    Result result;
    if (solve(nums, 4, &result)) {
        printf("可以计算出24点，表达式为：%s = 24\n", result.expr);
    }
    else {
        printf("无法计算出24点。\n");
    }

    // 方法2：生成所有可能的表达式并保存到文件
    FILE* fp = fopen("expressions.txt", "w");
    if (fp == NULL) {
        printf("无法打开文件。\n");
        return 1;
    }

    printf("正在生成所有可能的表达式并保存到文件...\n");
    generate_expressions(nums, 4, fp);
    fclose(fp);
    printf("表达式已保存到 expressions.txt 文件中。\n");

    return 0;
}