#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//输⼊⼀个正的整数，逆序打印这个整数的每⼀位
	int n = 0;
	scanf("%d", &n);
	while (n)
	{
		printf("%d", n % 10);
		n = n / 10;
	}
	return 0;

}
