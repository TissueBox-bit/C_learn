#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}int Sub(int x, int y)
{
	return x - y;
}int Mul(int x, int y)
{
	return x * y;
}int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int (*pf1)(int, int) = Add;
	int (*pf2)(int, int) = Sub;
	int (*pf3)(int, int) = Mul;
	int (*pf4)(int, int) = Div;

	//����ָ������
	int (*pf[4])(int, int) = { Add,Sub,Mul,Div };

	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int ret = pf[i](6, 2);
		printf("%d\n", ret);
	}
	return 0;
}