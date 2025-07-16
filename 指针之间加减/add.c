#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);
	printf("%d\n", &arr[0] - &arr[9]);
	//指针减指针的绝对值是指针和指针之间元素的个数
	//指针减指针计算的前提条件吗的两个指针指向的是同一个空间
	return 0;
}