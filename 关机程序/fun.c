#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//system �⺯��������ִ��ϵͳ����
//��Ҫstdlib.h��ͷ����
//�����ַ����Ƚ���ȵ�ʱ�򣬲���ʹ��==
//Ӧ��ʹ��strcmp
//��Ҫstring.h��ͷ����
int main()
{
	char intput[20] = { 0 };
	system("shutdown -s -t 60"); 
again:
	printf("��ע�⣬��ĵ��Խ���60���ػ���������룺��������ȡ���ػ�\n");
	scanf("%s", intput);//�������Ϣ���� input������
	//�ж�input�д�ŵ��ǲ��ǡ�������
	if (strcmp("������", intput) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}