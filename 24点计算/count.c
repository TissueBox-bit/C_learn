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

// 判断浮点数是否相等
int is_equal(double a, double b) {
    return fabs(a - b) < EPSILON;
}

// 生成所有可能的表达式
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

    // 枚举所有可能的数对
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            // 创建剩余数字的数组
            double remaining[3];
            int idx = 0;
            for (int k = 0; k < n; k++) {
                if (k != i && k != j) {
                    remaining[idx++] = nums[k];
                }
            }

            // 枚举所有可能的运算符
            for (int op = 0; op < 4; op++) {
                double result;
                char op_char;

                // 处理除法分母为0的情况
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

                // 将计算结果加入剩余数字
                remaining[idx] = result;

                // 递归生成表达式
                count += generate_expressions(remaining, idx + 1, solutions, start_idx + count);
            }
        }
    }

    return count;
}

// 中缀表达式转后缀表达式
void infix_to_postfix(char* infix, char* postfix) {
    char stack[MAX_EXPR_LENGTH];
    int top = -1;
    int j = 0;

    for (int i = 0; infix[i] != '\0'; i++) {
        if (isdigit(infix[i])) {
            // 处理数字
            while (isdigit(infix[i])) {
                postfix[j++] = infix[i++];
            }
            postfix[j++] = ' ';
            i--;
        }
        else if (infix[i] == '(') {
            // 左括号直接入栈
            stack[++top] = infix[i];
        }
        else if (infix[i] == ')') {
            // 右括号，弹出栈中运算符直到遇到左括号
            while (top >= 0 && stack[top] != '(') {
                postfix[j++] = stack[top--];
                postfix[j++] = ' ';
            }
            if (top >= 0 && stack[top] == '(') top--; // 弹出左括号
        }
        else {
            // 运算符
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

    // 弹出栈中剩余的运算符
    while (top >= 0) {
        postfix[j++] = stack[top--];
        postfix[j++] = ' ';
    }

    postfix[j] = '\0';
}

// 检查四个数字能否得到24
int judge_point24(double nums[], int n) {
    Number solutions[MAX_SOLUTIONS];
    int count = generate_expressions(nums, n, solutions, 0);
    return count > 0;
}

// 生成所有可能的四个数字组合并保存结果
void solve_all_and_save(const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("无法打开文件 %s\n", filename);
        return;
    }

    fprintf(file, "24点游戏所有可解组合及解法\n");
    fprintf(file, "================================\n");

    int total = 0;
    int solvable = 0;

    // 生成所有可能的四个数字组合(1-10)
    for (int a = 1; a <= 10; a++) {
        for (int b = a; b <= 10; b++) {
            for (int c = b; c <= 10; c++) {
                for (int d = c; d <= 10; d++) {
                    total++;
                    double nums[4] = { a, b, c, d };
                    if (judge_point24(nums, 4)) {
                        solvable++;
                        fprintf(file, "数字组合: [%d, %d, %d, %d]\n", a, b, c, d);
                        // 这里可以进一步完善，输出具体的解法
                        fprintf(file, "可解\n");
                        fprintf(file, "------------------------------\n");
                    }
                }
            }
        }
    }

    fprintf(file, "\n");
    fprintf(file, "总组合数: %d\n", total);
    fprintf(file, "可解组合数: %d\n", solvable);
    fprintf(file, "不可解组合数: %d\n", total - solvable);
    fprintf(file, "可解比例: %.2f%%\n", (double)solvable / total * 100);

    fclose(file);
}

int main() {
    // 示例：检查特定组合
    double nums[4] = { 1, 2, 5, 3 };
    printf("数字组合 [%.0f, %.0f, %.0f, %.0f] 是否可以得到24: %s\n",
        nums[0], nums[1], nums[2], nums[3],
        judge_point24(nums, 4) ? "是" : "否");

    // 生成并保存所有组合的解
    solve_all_and_save("24_solutions_c.txt");
    printf("所有组合的解已保存到24_solutions_c.txt\n");

    return 0;
}