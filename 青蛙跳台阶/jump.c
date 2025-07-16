#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//一个青蛙每次可以跳一个台阶或者两个台阶，现在有n个台阶，求共有几种跳法
int Fab(int n)
{
	int a = 1;
	int b = 2;
	int c = 0;
	int i = 0;
	for (i = 1; i <= n - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int r = Fab(n);
	printf("%d", r);
	return 0;
}