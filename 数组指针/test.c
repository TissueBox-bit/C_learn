#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	int(*p)[10] = &arr;//p��������ָ�룬p�д�ŵ�������ĵ�ַ
	//�������ŵĻ�����ʾΪָ�����飬������Ϊp��Ԫ��Ϊָ������飩

	//arr -- int*           arr+1����4���ֽ�
	//&arr[0] -- int*       &arr[0]+1����4���ֽ�
	//&arr -- int(*)[10]    &arr+1����40���ֽ�

	//��ʹ�����p����ָ�����arr���������
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i]);//����һ�㲻��ô�ã��������鷳��
	}
	return 0;
}