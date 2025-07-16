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
        perror("打开 stu2.txt 失败");
        return 1;
    }
    Student tempStu;
    printf("(1) 读取 stu2.txt 内容演示：\n");
    while (fscanf(fp_stu2, "%s %d %s", tempStu.id, &tempStu.age, tempStu.name) == 3) {
        printf("学号：%s，年龄：%d，姓名：%s\n", tempStu.id, tempStu.age, tempStu.name);
    }
    fclose(fp_stu2);
    FILE* fp_stu2_r = fopen("stu2.txt", "r");
    FILE* fp_stu3_w = fopen("stu3.txt", "w");
    if (fp_stu2_r == NULL || fp_stu3_w == NULL) {
        perror("文件打开失败");
        return 1;
    }
    char idBuf[20];
    int ageBuf;
    while (fscanf(fp_stu2_r, "%s %d", idBuf, &ageBuf) == 2) {
        fprintf(fp_stu3_w, "学号：%s，年龄：%d\n", idBuf, ageBuf);
    }
    fclose(fp_stu2_r);
    fclose(fp_stu3_w);
    printf("\n(2) stu3.txt 已写入学号、年龄信息\n");
    return 0;
}

