#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//一维数组在内存中的存储
//%p--地址
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("&arr[%d] = %p\n ", i, &arr[i]);
		//&--取地址操作符-取出变量在内存中的地址
		//打印出来的地址是16进制的
	}
	//得出数组的元素是连续存放的
	return 0;
}
