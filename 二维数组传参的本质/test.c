#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
Printf(int(*arr)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(arr+i))+j);//其实arr[i]表示的是&arr[i][0]
		}
		printf("\n");
	}
}
int main()
{
	//二维数组的数组名也是数组首元素的地址
	//二维数组可以理解为一维数组的数组
	//所以二维数组的数组名就是他第一行的地址
	int arr[3][5] = { {1,2,3,4,5}, { 2,3,4,5,6 }, { 3,4,5,6,7 } };
	Printf(arr, 3, 5);

	return 0;
}