#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createLinkedList() {
    struct Node* head = NULL, * tail = NULL;
    for (int i = 0; i < 6; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            printf("�ڴ����ʧ��!\n");
            return NULL;
        }
        printf("������� %d ���ڵ������: ", i + 1);
        scanf("%d", &(newNode->data));
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}
void traverseLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
int main() {
    struct Node* head = createLinkedList();
    if (head != NULL) {
        printf("�����е�����Ϊ: ");
        traverseLinkedList(head);
    }
    return 0;
}