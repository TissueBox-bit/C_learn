#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", sizeof(arr));//�����40

	printf("&arr[0] = %p\n", &arr[0]);
	printf("arr     = %p\n", arr);
	printf("&arr    = %p\n", &arr);
	printf("\n");
	printf("\n");

	//�������͵ıȽϣ�

	printf("&arr[0]   = %p\n", &arr[0]);
	printf("&arr[0]+1 = %p\n", &arr[0]+1);
	printf("\n");
	printf("arr       = %p\n", arr);
	printf("arr+1     = %p\n", arr+1);
	printf("\n");
	printf("&arr      = %p\n", &arr);
	printf("&arr+1    = %p\n", &arr+1);//���40��һ�������飩

	//��ʵ��������������Ԫ�صĵ�ַ
	// �����������⣺
	// 1.sizeof����������
	//    �������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
	// 2.&������
	//    �����������Ҳ��ʾ�������飬ȡ��������������ĵ�ַ
	// ����֮�⣬���е�����������ʾ������Ԫ�صĵ�ַ
	//
	return 0;
}