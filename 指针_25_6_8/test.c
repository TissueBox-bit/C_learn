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
	//����pa����4���ֽڣ���һ��int
	// pa+1*sizeof(int)
	//pc����1���ֽڣ���һ��char
	// pc+1*sizeof(char)
	return 0;
}