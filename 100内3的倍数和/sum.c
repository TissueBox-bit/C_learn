#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 1; i <= 100; i++)
	//也可以直接令i=3，每次i+=3
	{
		if (i % 3 == 0)
			sum = sum + i;
	}
	printf("1到100中3的倍数和为%d", sum);
	return 0;
}

