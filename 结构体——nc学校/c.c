#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Student {
    int id;
    char name[20];
    int score;
};
int main() {
    struct Student students[6];
    int i, j;
    srand(time(0)); 
    for (i = 0; i < 6; i++) {
        printf("请输入第 %d 位同学的学号: ", i + 1);
        scanf("%d", &students[i].id);
        printf("请输入第 %d 位同学的姓名: ", i + 1);
        scanf("%s", students[i].name);
        students[i].score = rand() % 101; 
    }
    for (i = 0; i < 5; i++) {
        int max_idx = i;
        for (j = i + 1; j < 6; j++) {
            if (students[j].score > students[max_idx].score) {
                max_idx = j;
            }
        }
        struct Student temp = students[i];
        students[i] = students[max_idx];
        students[max_idx] = temp;
    }
    printf("\n排序后的学生信息（按分数由高到低）:\n");
    for (i = 0; i < 6; i++) {
        printf("学号: %-5d 姓名: %-10s 分数: %d\n",
            students[i].id, students[i].name, students[i].score);
    }

    return 0;
}