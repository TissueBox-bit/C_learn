#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
	//按行打印
	int i = 0;
	for (i = 0; i <= 2; i++)
	{
		int j = 0;
		for (j = 0; j <= 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	//按列打印
	int a = 0;
	for (a = 0; a <= 4; a++)
	{
		int b = 0;
		for (b= 0; b <= 2; b++)
		{
			printf("%d ", arr[b][a]);
		}
		printf("\n");
	}
	return 0;
}

