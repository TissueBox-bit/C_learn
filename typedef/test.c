#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


typedef unsigned int uint;
typedef int* pint_t;
//数组指针比较特别
typedef int(*parr_t)[6];
//类型为int(*)[6],新名字写在里面
//指针数组同理
typedef int(*pf_t)(int, int);

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//typedef是用来重命名类型的
	unsigned int num1;
	uint num2;

	int* p1;
	pint_t p2;

	int arr[6] = { 0 };
	int(*p)[6] = &arr;
	parr_t pp = &arr;

	int(*pf)(int, int) = Add;
	pf_t pf2 = Add;
	return 0;
}