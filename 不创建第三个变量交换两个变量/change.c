#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//不创建第三个变量交换两个变量
int main()
{
	int a = 3;
	int b = 5;

	pritnf("交换前：a=%d b=%d", a, b);

	a = a ^ b;
	b = a ^ b;//(b=a^b=a^b^b=a)
	a = a ^ b;//(a=a^b=a^b ^ a)
	//异或的特点：
	//a^a=0
	//0^a=a
	//3^3^5=0
	//3^5^3=0(即异或支持交换律)

	pritnf("交换后：a=%d b=%d", a, b);

	//虽然但是还是推荐创建第三个变量
	/*int c = 0;
	c = a;
	a = b;
	b = c;*/
	return 0;
}