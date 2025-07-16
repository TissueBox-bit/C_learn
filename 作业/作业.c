#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入一个三位数");
	scanf("%d", &a);
	b = a % 10 * 100 + a / 10 % 10 * 10 + a / 100 % 10;
	printf("结果%d", b);
	return 0;
}