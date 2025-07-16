#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int* p = arr;
	//输入
	for (i = 0; i < sz; i++)
	{
		scanf("%d", p + i);
		//所以p+i也可以写作arr+i
	}
	//输出
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
		//同理可以写作*(arr + i)
		//所以 *(arr = i) <==> arr[i]
		//*(arr + i) <==> arr[i] <==> *(arr + i) <==> *(i + arr) <==> i[arr]
		//说明了[]仅仅是一个操作符
	}

	//为什么可以使用指针来访问数组呢？
	// 1.数组在内存中是连续存放的
	// 2.指针的元素很方便的可以遍历数组，取出数组的内容
	//
	return 0;
}