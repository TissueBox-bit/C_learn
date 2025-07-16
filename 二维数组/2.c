#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int data1[3][5] = { 1,2,3,4,5,6,7,8 };//不完全初始化，先排第一行，满了再往下一行排
	int data2[3][5] = { 0 };//不完全初始化
	int data3[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };//完全初始化
	int data4[3][5] = { {1,2},{3,4},{5,6} };//每一行排两个，剩余为0，同一维数组
	return 0;
}