#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//дһ��������ͳ���ַ����ĳ���
//����pָ����ַ������������޸ģ�����charǰ���const
size_t my_strlen(const char* p)
{
	size_t count = 0;
	assert(p != NULL);
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef\0";
	size_t len = my_strlen(arr);//��������ʵ��������Ԫ�صĵ�ַ arr == &arr[0]�������β�Ӧ��Ϊָ��
	printf("%zd", len);
	return 0;
}