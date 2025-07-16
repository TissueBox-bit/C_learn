#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 10;
	int arr[10] = { 100,200 };
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof a);//4
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(arr));//40
	//sizeof是操作符，不是函数
	//sizeof 只关注占⽤内存空间的⼤⼩，不在乎内存中存放什么数据。

	char arr1[3] = { 'a', 'b', 'c' };
	char arr2[] = "abc";
	//arr1:a b c
	//arr2:a b c \0
	printf("%d\n", strlen(arr1));//随机值
	printf("%d\n", strlen(arr2));//3

	printf("%d\n", sizeof(arr1));//3
	printf("%d\n", sizeof(arr2));//4
	//strlen 是C语⾔库函数，功能是求字符串⻓度。
	//统计的是从 strlen 函数的参数 str 中这个地址开始向后， \0 之前字符串中字符的个数

	return 0;
}