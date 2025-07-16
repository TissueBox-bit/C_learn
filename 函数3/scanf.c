#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int score;
	printf("请输入成绩：");
	scanf("%d", &score);//输入操作
	//scanf函数中占位符的后面的参数需要的是地址
	//& 取地址符号，&score...取出score的地址
	printf("成绩是：%d\n", score);
	return 0;
}