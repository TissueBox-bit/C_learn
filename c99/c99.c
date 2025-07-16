#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//c99之后，c语言引入了变长数组的概念，使得数组的大小可以使用变量来指定
	//但是Vs2022是不支持变长数组的
	//Devc++ / 小熊猫c++底层使用的gcc，gcc支持c99的变长数组的使用
	int n = 0;
	scanf("%d", &n);
	int arr[n];
	return 0;
}
