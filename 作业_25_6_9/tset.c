#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
typedef struct {
    char id[20];   
    int age;       
    char name[50]; 
} Student;
int main() {
    FILE* fp_stu2 = fopen("stu2.txt", "r");
    if (fp_stu2 == NULL) {
        perror("�� stu2.txt ʧ��");
        return 1;
    }
    Student tempStu;
    printf("(1) ��ȡ stu2.txt ������ʾ��\n");
    while (fscanf(fp_stu2, "%s %d %s", tempStu.id, &tempStu.age, tempStu.name) == 3) {
        printf("ѧ�ţ�%s�����䣺%d��������%s\n", tempStu.id, tempStu.age, tempStu.name);
    }
    fclose(fp_stu2);
    FILE* fp_stu2_r = fopen("stu2.txt", "r");
    FILE* fp_stu3_w = fopen("stu3.txt", "w");
    if (fp_stu2_r == NULL || fp_stu3_w == NULL) {
        perror("�ļ���ʧ��");
        return 1;
    }
    char idBuf[20];
    int ageBuf;
    while (fscanf(fp_stu2_r, "%s %d", idBuf, &ageBuf) == 2) {
        fprintf(fp_stu3_w, "ѧ�ţ�%s�����䣺%d\n", idBuf, ageBuf);
    }
    fclose(fp_stu2_r);
    fclose(fp_stu3_w);
    printf("\n(2) stu3.txt ��д��ѧ�š�������Ϣ\n");
    return 0;
}

