#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = &arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		//printf("%d ", *(p+i));
		p++;
	}
	printf("\n");
	int* t = &arr[9];
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *t);
		t--;
	}
	//1.指针类型决定了指针+1的步长，决定了指针解引用的权限
	//2.数组在内存中是连续存放的
	return 0;
}