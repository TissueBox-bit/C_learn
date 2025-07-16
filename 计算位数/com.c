#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//输入一个正整数，判断位数
	int n = 0;
	int num = 0;
	scanf("%d", &n);
	for (num = 0; n != 0; n = n / 10)
	{
		num++;
	}
	printf("%d", num);
	return 0;
}

