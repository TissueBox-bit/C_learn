#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)//因为偶数不是素数
	{
		int flag = 1;//指i为素数
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}

		}
		if (flag == 1)
		{
			printf("%d ", i);
			count++;
		}
			
		
	}
	printf("\n%d\n", count);
	return 0;
}