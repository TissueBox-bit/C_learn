#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
max(int a, int b, int c)
{
	int i = (a > b) ? a : b;
	return (i > c) ? i : c;
}
double fun(int a,int b,int c)
{
	int p = (a + b + c) / 2;
	if (a + b + c - max(a, b, c) <= max(a, b, c))
	{
		return -1;
	}
	else
	{
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入三角形的三边：");
	scanf("%d %d %d", &a, &b, &c);
	int s = fun(a, b, c);
	printf("三角形面积为：%d", s);
	return 0;
}