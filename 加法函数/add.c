#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//加法函数
int add(int x, int y)//在函数定义部分，函数后面的参数，叫做形式参数，简称形参
{
	int z = 0;
	z = x + y;
	return z;//把z的值返回出去
}
//也可以这么写return x + y;

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = a + b;//在这里调用函数的时候，实际传递给函数的参数叫做实际参数，简称实参
	//传递过程称为形参的实例化
	printf("%d", c);
	return 0;
}

void printf(void)//且因为不含参数，括号里也可以不写void直接空着（最好写，否则任何情况都能被调用，而不是含参调用时报错）
//void表示没有返回类型,此时不用写return(前面那个)
{
	printf("..");
}