#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����������������������������
int main()
{
	int a = 3;
	int b = 5;

	pritnf("����ǰ��a=%d b=%d", a, b);

	a = a ^ b;
	b = a ^ b;//(b=a^b=a^b^b=a)
	a = a ^ b;//(a=a^b=a^b ^ a)
	//�����ص㣺
	//a^a=0
	//0^a=a
	//3^3^5=0
	//3^5^3=0(�����֧�ֽ�����)

	pritnf("������a=%d b=%d", a, b);

	//��Ȼ���ǻ����Ƽ���������������
	/*int c = 0;
	c = a;
	a = b;
	b = c;*/
	return 0;
}