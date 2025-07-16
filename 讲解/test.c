#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//while跟for其实本质上是差不多的
	int n = 0;
	while (n < 5)
	{
		n++;
	}
	//等价于
	for (n = 0; n < 5; n++)
	{

	}
	return 0;
}