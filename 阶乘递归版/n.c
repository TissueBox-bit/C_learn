#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fact(int n)
{
	if (n == 0)
		return 1;
	else if(n > 0)
		return n * Fact(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int r = Fact(n);
	printf("%d", r);
	return 0;
}