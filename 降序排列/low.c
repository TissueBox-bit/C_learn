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
	printf("���ɵ������Ϊ��");
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	printf("����������Ϊ��");
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}