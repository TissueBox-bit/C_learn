#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TARGET 24
#define EPSILON 1e-6
#define MAX_EXPR_LEN 200
#define MAX_OP_COMBOS 100000  // 限制最大表达式数量，防内存爆炸

typedef struct {
    double nums[4];   // 当前参与运算的数字（最多4个，迭代过程中动态减少）
    int num_count;    // 当前数字数量（4→3→2→1）
    char expr[MAX_EXPR_LEN]; // 当前表达式
} CalcState;

// 判断浮点数相等
int is_equal(double a, double b) {
    return fabs(a - b) < EPSILON;
}

// 数字转字符串
void num_to_str(double num, char* str) {
    if (is_equal(floor(num), num)) {
        sprintf(str, "%d", (int)num);
    }
    else {
        sprintf(str, "%.2f", num); // 简化显示，也可保留%g
    }
}

// 执行运算，返回新状态（堆分配，需手动释放）
CalcState* apply_op(CalcState* state, int i, int j, char op) {
    // 1. 深拷贝原状态（避免影响后续迭代）
    CalcState* new_state = (CalcState*)malloc(sizeof(CalcState));
    memcpy(new_state, state, sizeof(CalcState));

    double a = new_state->nums[i];
    double b = new_state->nums[j];

    // 2. 从nums中移除a和b，插入运算结果
    int k, idx = 0;
    double temp_nums[3];
    for (k = 0; k < new_state->num_count; k++) {
        if (k != i && k != j) {
            temp_nums[idx++] = new_state->nums[k];
        }
    }
    new_state->num_count = idx;
    memcpy(new_state->nums, temp_nums, sizeof(double) * idx);

    // 3. 拼接表达式
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
        if (is_equal(b, 0)) { // 除零保护
            free(new_state);
            return NULL;
        }
        new_state->nums[idx] = a / b;
        sprintf(new_state->expr, "(%s/%s)", a_str, b_str); break;
    default: free(new_state); return NULL;
    }
    new_state->num_count++; // 插入结果后，数量+1（如3个数运算后→2个数+1结果→3个数）
    return new_state;
}

// 迭代版24点运算，结果存入文件
void solve_24_iterative(double init_nums[4], const char* filename) {
    FILE* fp = fopen(filename, "w");
    if (!fp) {
        printf("文件打开失败：%s\n", filename);
        return;
    }

    // 初始化队列：用数组模拟队列，存CalcState指针（堆分配）
    CalcState* queue[MAX_OP_COMBOS];
    int front = 0, rear = 0;

    // 初始状态入队：4个数字，表达式为空（或初始数字拼接）
    CalcState* init_state = (CalcState*)malloc(sizeof(CalcState));
    memcpy(init_state->nums, init_nums, sizeof(double) * 4);
    init_state->num_count = 4;
    sprintf(init_state->expr, "%g,%g,%g,%g", init_nums[0], init_nums[1], init_nums[2], init_nums[3]);
    queue[rear++] = init_state;

    // 迭代处理队列（广度优先，避免递归深度问题）
    while (front < rear && rear < MAX_OP_COMBOS) {
        CalcState* curr = queue[front++];

        // 递归终止条件：只剩1个数字
        if (curr->num_count == 1) {
            if (is_equal(curr->nums[0], TARGET)) {
                fprintf(fp, "成功：%s = 24\n", curr->expr);
            }
            else {
                fprintf(fp, "失败：%s = %.2f\n", curr->expr, curr->nums[0]);
            }
            free(curr); // 释放堆内存
            continue;
        }

        // 遍历所有数字对和运算符
        for (int i = 0; i < curr->num_count; i++) {
            for (int j = 0; j < curr->num_count; j++) {
                if (i == j) continue; // 跳过相同下标

                char ops[] = "+-*/";
                for (int op_idx = 0; op_idx < 4; op_idx++) {
                    CalcState* next_state = apply_op(curr, i, j, ops[op_idx]);
                    if (next_state) {
                        queue[rear++] = next_state; // 新状态入队
                    }
                }
            }
        }
        free(curr); // 释放当前状态内存
    }

    // 处理队列剩余元素（防止超出MAX_OP_COMBOS）
    while (front < rear) {
        free(queue[front++]);
    }
    fclose(fp);
}

int main() {
    double nums[4];
    printf("请输入4个1-10的数字（空格分隔）：");
    if (scanf("%lf %lf %lf %lf", &nums[0], &nums[1], &nums[2], &nums[3]) != 4) {
        printf("输入错误！\n");
        return 1;
    }

    // 检查输入范围
    for (int i = 0; i < 4; i++) {
        if (nums[i] < 1 || nums[i] > 10) {
            printf("数字%.2f超出1-10范围！\n", nums[i]);
            return 1;
        }
    }

    // 迭代法求解，结果存入文件
    solve_24_iterative(nums, "24_result.txt");
    printf("运算完成！结果已保存至24_result.txt\n");
    return 0;
}