#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "abcdef";
	size_t len = strlen(arr);//������int�������ڳ���Ϊ�����������Ը�Ϊsize_t���޷������ͣ�������Ҳ������%zd
	printf("%zd\n", len);

	//arr��Ԫ��Ϊ��a b c d e f \0
	//strlen��ʵͳ�Ƶ����ַ�����\0֮ǰ���ַ��ĸ���
	return 0;
}