#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ��������ͳ���ַ����ĳ���
size_t my_strlen(char* p)
{
	char* start = p;
	char* end = p;
	while (*end != '\0')//ֱ��д*endҲ��
	{
		end++;
		
	}
	return end-start;//ָ�����
}
int main()
{
	char arr[] = "abcdef\0";
	size_t len = my_strlen(arr);//��������ʵ��������Ԫ�صĵ�ַ arr == &arr[0]�������β�Ӧ��Ϊָ��
	printf("%zd", len);
	return 0;
}