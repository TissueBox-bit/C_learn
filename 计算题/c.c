#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = (a++ && ++b && d++);
	//a++先使用，所以i=a=0，为假后面的并且不用使用（“短路”）
	// 若a！=0；则第七行需继续运行到b
	// 若运行完++b=0则停止，否则继续走
	//i= a++ || ++b ||d++
	printf("i=%d,a=%d,b=%d,c=%d,d=%d", i, a, b, c, d);
	return 0;
}