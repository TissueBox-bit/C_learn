#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//输出结果为4321，因为printf返回的是int类型的值——打印数量
	printf("%d", printf("%d ", printf("%d ", 43)));
	//所以这里结果是43 3 2（因为有空格）
	return 0;
}