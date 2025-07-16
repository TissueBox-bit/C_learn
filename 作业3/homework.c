#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char str[10];
	int i = 0;
	int j = 0;
	printf("请输入长度为10的字符串:\n");
	for (i = 0; i <= 9; i++)
	{
		scanf("%c", &str[i]);
	}
	printf("输入的数组为：");
	for (i = 0; i <= 9; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	int left = 0;
	int right = 0;
	for (left = 0, right = 9; left <= right; left++, right--)
	{
		char t = str[left];
		str[left] = str[right];
		str[right] = t;
	}
	printf("置换后的数组为：");
	for (i = 0; i <= 9; i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}