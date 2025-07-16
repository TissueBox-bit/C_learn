#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("hehe\n");
	main();
	//如果函数无限的递归下去，就会报错——Stack overflow（栈溢出）
	//所以这是一个错误的示范，会导致函数无限的递归下去
	return 0;
}