#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*char arr[] = "abcdef";
	char* p = arr;*/
	//�ȼ���
	const char* p = "abcdef";//���ڲ����޸����ݣ���ֱ����ǰ���const
	//����ĸ�ֵ�ǽ��ַ����е����ַ��ĵ�ַ��ֵ��p
	printf("%c\n", *p);//a
	printf("%s\n", p);//ʹ��%s��ӡ�ַ�����ʱ��ֻ��Ҫ�ṩ����ĸ�ĵ�ַ����
	return 0;
}