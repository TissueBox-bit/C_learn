#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ӷ�����
int add(int x, int y)//�ں������岿�֣���������Ĳ�����������ʽ����������β�
{
	int z = 0;
	z = x + y;
	return z;//��z��ֵ���س�ȥ
}
//Ҳ������ôдreturn x + y;

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = a + b;//��������ú�����ʱ��ʵ�ʴ��ݸ������Ĳ�������ʵ�ʲ��������ʵ��
	//���ݹ��̳�Ϊ�βε�ʵ����
	printf("%d", c);
	return 0;
}

void printf(void)//����Ϊ����������������Ҳ���Բ�дvoidֱ�ӿ��ţ����д�������κ�������ܱ����ã������Ǻ��ε���ʱ����
//void��ʾû�з�������,��ʱ����дreturn(ǰ���Ǹ�)
{
	printf("..");
}