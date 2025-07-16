#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int Add(int, int);
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = Add(a, b);
	printf("%d", c);
	return 0;
}