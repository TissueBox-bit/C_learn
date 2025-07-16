#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//一维数组的创建
	//int math[20];//数组有20个元素，每个类型是int
	//char ch[5];
	//double arr[6];

	//创建和初始化
	int math[20] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
	int math2[20] = { 0,1,2,3,4,5 };//不完全初始化，剩下的元素默认初始化为0
	//类型为int[20]
	char ch[5] = { 'a','b' };
	char ch2[5] = "abc";//两种写法都可以
	//类型为char[5]
	double arr[6] = { 0.0 };
	return 0;
}

