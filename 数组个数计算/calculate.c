#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	pritnf("%zd\n", sizeof(arr));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	//使用
	int i = 0;
	for (i = 0; i < sz; i++)//这样不用自己写i的上限，哪怕arr个数有变化也不怕
	{
		pritnf("%d", arr[i]);
	}


	/*int a = 0;
	printf("%zd", sizeof(a));//单位是字节
	printf("%zd", sizeof(int));*/

	return 0;
}