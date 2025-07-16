#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	int b = a << 1;
	//左移操作符移动的是内存中的二进制，即补码
	//左移超过的丢弃，右边补0
	//左移一位是*2的效果
	int c = a >> 1;
	//右移操作符分两种：
	/*1. 逻辑右移：左边⽤0填充，右边丢弃
	2. 算术右移：左边⽤原该值的符号位填充，右边丢弃*/
	return 0;
}