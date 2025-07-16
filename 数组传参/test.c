#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//数组传参的时候，形参可以写成数组，也可以写成指针
//写成数组的形式，最简单，是为了方便理解，容易接受这种语法
//但是即使写成数组的形式，本质上还是指针
void test(int arr[10])//所以写成int* arr
{
	int sz2 = sizeof(arr) / sizeof(arr[0]);
	printf("sz2 = %d", sz2);//1
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	pritnf("sz1 = %d", sz1);//10

	test(arr);
	//数组传参的本质，传递的是数组首元素的地址
	//所以形参即使写成数组的形式，本质上也是一个指针变量

	return 0;
}