#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���鴫�ε�ʱ���βο���д�����飬Ҳ����д��ָ��
//д���������ʽ����򵥣���Ϊ�˷�����⣬���׽��������﷨
//���Ǽ�ʹд���������ʽ�������ϻ���ָ��
void test(int arr[10])//����д��int* arr
{
	int sz2 = sizeof(arr) / sizeof(arr[0]);
	printf("sz2 = %d", sz2);//1
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	pritnf("sz1 = %d", sz1);//10

	test(arr);
	//���鴫�εı��ʣ����ݵ���������Ԫ�صĵ�ַ
	//�����βμ�ʹд���������ʽ��������Ҳ��һ��ָ�����

	return 0;
}