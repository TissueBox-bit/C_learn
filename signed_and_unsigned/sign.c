#include<stdio.h>
int main()
{
	int a = -100;//这里省略了signed
	printf("%d\n", a);
	unsigned b = 100;
	printf("%d\n", b);//神奇的是unsigned定义的是非负整数，而若以unsigned定义一个负数再用%d打印依然可以打印出该负数
	unsigned c = 100;
	printf("%u\n", c);//%d打印有符号整数，%u打印无符号整数
	int num = 1;
	printf("num = %d\n", num);
	float d = 15;
	printf("%f\n", d);//%f默认打印六位小数
	return 0;

}