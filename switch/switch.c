#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//判断一个数除以三的余数
	int n = 0;
	scanf("%d", &n);
	switch (n % 3)//switch 后的 expression 必须是整型表达式,char（字符）类型也可以
	{
	case 0:	
		printf("余数是0\n");//case 后的值，必须是整形常量表达式
		break;
	case 1:
		printf("余数是1\n");
		break;
	case 2:
		printf("余数是2\n");
		break;
	}
	return 0;
}