#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("hehe\n");
	main();
	//����������޵ĵݹ���ȥ���ͻᱨ����Stack overflow��ջ�����
	//��������һ�������ʾ�����ᵼ�º������޵ĵݹ���ȥ
	return 0;
}