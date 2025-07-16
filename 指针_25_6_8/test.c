#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 20;
	int* pa = &a;
	char* pc = &a;

	pritnf("&a = %p\n", &a);
	pritnf("pa = %p\n", pa);
	pritnf("pc = %p\n", pc);

	pritnf("&a+1 = %p\n", &a+1);
	pritnf("pa+1 = %p\n", pa+1);
	pritnf("pc+1 = %p\n", pc+1);
	//这里pa加了4个字节，即一个int
	// pa+1*sizeof(int)
	//pc加了1个字节，即一个char
	// pc+1*sizeof(char)
	return 0;
}