#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//�ж�һ����������������
	int n = 0;
	scanf("%d", &n);
	switch (n % 3)//switch ��� expression ���������ͱ��ʽ,char���ַ�������Ҳ����
	{
	case 0:	
		printf("������0\n");//case ���ֵ�����������γ������ʽ
		break;
	case 1:
		printf("������1\n");
		break;
	case 2:
		printf("������2\n");
		break;
	}
	return 0;
}