#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//当对数组进行初始化的时候，数组的大小可以省略，
	//编译器会根据数组的初始化内容，自动计算数组元素个数

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//10是指定数组元素个数的
	//下标          0 1 2 3 4 5 6 7 8 9
	printf("%d\n", arr[5]);//[]-- 下标引用操作符
	//这里的5是数组元素的下标
	printf("%d\n", arr[9]);


	//打印所有arr
	int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	////或者
	//while (i < 10)
	//{
	//	printf("%d ", arr[i]);
	//	i++;
	//}

	//给数组输入元素
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}