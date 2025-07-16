#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define INT_MAX 0b1111111111111111111111111111111
//上一份中二分法求mid有漏洞，若left与right接近最大值INT_MAX，相加之后会超出最大值
//INT_MAX=2147483647
int main()
{
	//新做法：
	int a = 2147483646;
	int b = 2147483646;
	int c = 0;
	int d = 0;
	int avg = 0;
	c = (a < b) ? a : b;
	d = (a > b) ? a : b;
	avg = c + (d - c) / 2;
	printf("%d", avg);

	//所以二分法中求mid就可以写作
	//mid = left+(right-left)/2;
	//因为肯定left<right
	return 0;
}