#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int month = 0;
	scanf("%d", &month);
	if (month == 12 || month == 1 || month == 2)
		//⾄少有⼀个表达式为真，则为真，否则为假
		printf("是冬季\n");
	return 0;
}