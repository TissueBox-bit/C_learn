#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;

	int* pa = &a;//pa��һ��ָ�����

	int** ppa = &pa;//ppa�Ƕ���ָ�����
	//��һ��*��int*����ppaָ���pa�����͵�int*
	//�ڶ���*��˵��ppa��ָ�����

	//**ppa == *pa ==a
	return 0;
}