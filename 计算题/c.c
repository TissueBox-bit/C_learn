#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = (a++ && ++b && d++);
	//a++��ʹ�ã�����i=a=0��Ϊ�ٺ���Ĳ��Ҳ���ʹ�ã�����·����
	// ��a��=0�����������������е�b
	// ��������++b=0��ֹͣ�����������
	//i= a++ || ++b ||d++
	printf("i=%d,a=%d,b=%d,c=%d,d=%d", i, a, b, c, d);
	return 0;
}