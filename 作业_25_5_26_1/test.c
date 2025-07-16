#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct Student {
    int num;               
    float score;           
    struct Student* next; 
};
int main()
{
    struct Student* head = NULL, * p = NULL, * temp = NULL;
    for (int i = 0; i < 6; i++)
    {
        temp = (struct Student*)malloc(sizeof(struct Student));
        if (temp == NULL) {
            printf("�ڴ����ʧ��\n");
            return 1;
        }
        temp->num = 202403 + i;        
        temp->score = 70.0 + i * 1.5; 
        temp->next = NULL;           
        if (head == NULL)
        {
            head = temp; 
        }
        else
        {
            p->next = temp; 
        }
        p = temp; 
    } 
    printf("�����е����ݣ�\n");
    p = head; 
    while (p != NULL) 
    {
        printf("ѧ��: %d, �ɼ�: %.1f\n", p->num, p->score);
        p = p->next; 
    }
    p = head;
    while (p != NULL)
    {
        temp = p->next; 
        free(p);        
        p = temp;       
    }
    return 0;
}