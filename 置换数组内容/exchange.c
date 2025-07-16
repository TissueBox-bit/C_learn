#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//：写⼀个函数将⼀个整型数组的内容，全部置为-1，再写⼀个函数打印数组的内容。
void set_arr(int arr[10], int sz, int set)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = set;
		//多这个set是为了不管要变成上面值都能实现
	}
}
void printf_arr(int arr[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	set_arr(arr, sz, -1);
	printf_arr(arr, sz);
	return 0;
}

//1.数组在传参的时候，实参就写数组名就好，形参也是数组的形式
//2.实参和形参的名字可以是一样的，也可以是不一样的
//3.函数在设计的时候，一定要尽量功能单一
//4.数组在传参的时候，形参的数组和实参的数组是同一个数组

//函数的形式参数要和函数的实参个数匹配
// 函数的实参是数组，形参也是可以写成数组形式的
//形参如果是⼀维数组，数组⼤⼩可以省略不写
//形参如果是⼆维数组，⾏可以省略，但是列不能省略
//数组传参，形参是不会创建新的数组的
//形参操作的数组和实参的数组是同⼀个数组