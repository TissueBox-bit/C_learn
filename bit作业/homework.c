#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("����������0��10000֮�������");
	scanf("%d,%d", &a, &b);
	if (a > 0 && a < 10000 && b > 0 && b < 10000)
	{
		c = a / b;
		d = a % b;
		printf("a����b����Ϊ%d������Ϊ%d", c, d);
	}
	else
	{
		printf("���������������Ҫ��");
	}
	return 0;
}