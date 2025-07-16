#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef int elemtype;
//定义结构体
typedef struct node {
	elemtype data;
	struct node* next;
}Node;

//单链表的初始化
Node* initlist()
{
	Node* head = (Node*)malloc(sizeof(Node));
	head->data = 0;
	head->next = NULL;
	return head;

}

//头插法
int inserthead(Node* head, elemtype e)
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = e;
	p->next = head->next;
	head->next = p;


}

//尾插法
//获取尾节点
Node* Tail(Node* head)
{
	Node* p = head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	return p;
}
Node* inserttail(Node* tail, elemtype e)
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = e;
	tail->next = p;
	p->next = NULL;
	return p;

}

//在特定位置插入数据
int* insertnode(Node* head, int pos, elemtype e)
{
	Node* q = head;//指向其前节点
	//找到要插入位置的前节点
	int i = 0;
	while (i < pos - 1);
	{
		q = q->next;
		i++;
		if (q->next == NULL)
		{
			printf("插入位置出错\n");
			return 0;
		}
	}
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = e;
	p->next = q->next;
	q->next = p;
	return 1;
}

//遍历
void listnode(Node* L)
{
	Node* p = L->next;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");

}

int main() {
	Node* list = initlist();
	inserthead(list, 10);
	inserthead(list, 20);
	Node* tail = Tail(list);
	tail = inserttail(list, 25);
	tail = inserttail(list, 30);
	insertnode(list, 2, 15);
	listnode(list);
	return 0;
}