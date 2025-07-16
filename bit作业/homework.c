#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("请输入两个0到10000之间的整数");
	scanf("%d,%d", &a, &b);
	if (a > 0 && a < 10000 && b > 0 && b < 10000)
	{
		c = a / b;
		d = a % b;
		printf("a除以b，商为%d，余数为%d", c, d);
	}
	else
	{
		printf("您输入的数不符合要求");
	}
	return 0;
}