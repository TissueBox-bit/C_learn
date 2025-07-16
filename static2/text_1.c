#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//变量在使用前页要声明
extern int i;
int main()
{
	printf("%d", i);
	return 0;
}