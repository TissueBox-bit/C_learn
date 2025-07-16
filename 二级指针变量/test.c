#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;

	int* pa = &a;//pa是一级指针变量

	int** ppa = &pa;//ppa是二级指针变量
	//第一个*（int*）：ppa指向的pa的类型的int*
	//第二个*：说明ppa是指针变量

	//**ppa == *pa ==a
	return 0;
}