#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 13;
	int n = 5;
	a = a | (1 << (n - 1));
	pritnf("%d", a);

	a &= ~(1 << (n - 1));
	pritnf("%d", a);
	return 0;
}