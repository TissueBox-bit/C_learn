#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int flag = 1;//Ö¸iÎªËØÊý
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
			printf("%d ", i);
		
	}
	return 0;
}

