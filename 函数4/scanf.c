#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char name[20] = { 0 };
	int high = 0;
	char c[20] = { 0 };
	char d[20] = { 0 };
	printf("��ѡ����Ľ�ɫ������/����/����\n");
	scanf("%s", &name);//&Ϊȡ��ַ����������Ϊname��һ������������Ҫ��&
	printf("��ѡ���ɫ��ߣ�");
	scanf("%d", &high);
	printf("��ѡ���ɫ������");
	scanf("%s", &c);
	printf("��ѡ���ɫ���ɣ�");
	scanf("%s", &d);
	printf("�����ݣ�\n");
	printf("%s\n", name);
	printf("%d\n", high);
	printf("%s\n", c);
	printf("%s\n", d);
	return 0;
}