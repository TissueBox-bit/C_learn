#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//һά�������ڴ��еĴ洢
//%p--��ַ
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("&arr[%d] = %p\n ", i, &arr[i]);
		//&--ȡ��ַ������-ȡ���������ڴ��еĵ�ַ
		//��ӡ�����ĵ�ַ��16���Ƶ�
	}
	//�ó������Ԫ����������ŵ�
	return 0;
}
