#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int arr[10];
	int i = 0;
	int j = 0;
	srand((unsigned int)time(NULL));
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand();
	}
	printf("生成的随机数组为：");
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	/*for (j = 0; j < 5; j++)
	{
		int t = arr[j];
		arr[j] = arr[9 - j];
		arr[9 - j] = t;
	}*/
	int left = 0;
	int right = 0;
	for (left = 0, right = 9; left <= right; left++, right--)
	{
		int t = arr[left];
		arr[left] = arr[right];
		arr[right] = t;
	}
	printf("置换后的数组为：");
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}