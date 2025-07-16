#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*输⼊⼀个年份year，判断year是否是闰年
	闰年判断的规则：
	1. 能被4整除并且不能被100整除是闰年
	2. 能被400整除是闰年*/

int main()
{
	int year = 0;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("%d是闰年", year);
	else
		printf("%d不是闰年", year);
	return 0;
}