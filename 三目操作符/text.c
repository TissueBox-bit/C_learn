#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	if (a < 5)
		b = 3;
	else
		b = -3;
	//也可以写成这样（三目操作符）
	int c = 0;
	int d = 0;
	scanf("%d", &c);
	b = (a < 5 ? 3 : -3);

	
	return 0;
}