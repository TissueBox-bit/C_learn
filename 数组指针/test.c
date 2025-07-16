#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	int(*p)[10] = &arr;//p就是数组指针，p中存放的是数组的地址
	//不加括号的话，表示为指针数组，（名字为p，元素为指针的数组）

	//arr -- int*           arr+1跳过4个字节
	//&arr[0] -- int*       &arr[0]+1跳过4个字节
	//&arr -- int(*)[10]    &arr+1跳过40个字节

	//想使用这个p数组指针访问arr里面的内容
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i]);//但是一般不这么用，这样更麻烦了
	}
	return 0;
}