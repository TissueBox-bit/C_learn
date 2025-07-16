#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[3][6];
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 6; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("输入的数组为：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("第%d行的平均数为：", i + 1);
		float sum = 0;
		for (j = 0; j < 6; j++)
		{
			sum = sum + arr[i][j];
		}
		printf("%f\n", sum/j);
	}
	for (j = 0; j < 6; j++)
	{
		printf("第%d列的平均数为：",j+1);
		float sum = 0;
		for (i = 0; i < 3; i++)
		{
			sum = sum + arr[i][j];
		}
		printf("%f\n", sum / i);
	}
	return 0;
}