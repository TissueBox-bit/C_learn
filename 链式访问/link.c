#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//������Ϊ4321����Ϊprintf���ص���int���͵�ֵ������ӡ����
	printf("%d", printf("%d ", printf("%d ", 43)));
	//������������43 3 2����Ϊ�пո�
	return 0;
}