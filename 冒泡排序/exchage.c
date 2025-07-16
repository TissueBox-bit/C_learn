#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//冒泡排序：两两相邻的元素比较，不满足顺序就交换，满足就找下一对
void input(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		scanf("%d", arr + i);
	}
}
void sort(int* arr, int sz)
{
	//确认趟数（把一个数推到底就算一趟）
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设已经满足顺序
		//每一趟内部比较
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;//还不是有序
				//交换
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
		if (flag == 1)//防止数组本身就是升序，浪费运行时间
		{
			break;
		}
	}
}
void pritnf(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr + i);
	}
}
int main()
{
	int arr[10] = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	input(arr, sz);

	sort(arr, sz);
	print(arr, sz);
	return 0;
}
