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
        printf("������� %d λͬѧ��ѧ��: ", i + 1);
        scanf("%d", &students[i].id);
        printf("������� %d λͬѧ������: ", i + 1);
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
    printf("\n������ѧ����Ϣ���������ɸߵ��ͣ�:\n");
    for (i = 0; i < 6; i++) {
        printf("ѧ��: %-5d ����: %-10s ����: %d\n",
            students[i].id, students[i].name, students[i].score);
    }

    return 0;
}