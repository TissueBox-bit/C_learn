#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int* p = arr;
	//����
	for (i = 0; i < sz; i++)
	{
		scanf("%d", p + i);
		//����p+iҲ����д��arr+i
	}
	//���
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
		//ͬ�����д��*(arr + i)
		//���� *(arr = i) <==> arr[i]
		//*(arr + i) <==> arr[i] <==> *(arr + i) <==> *(i + arr) <==> i[arr]
		//˵����[]������һ��������
	}

	//Ϊʲô����ʹ��ָ�������������أ�
	// 1.�������ڴ�����������ŵ�
	// 2.ָ���Ԫ�غܷ���Ŀ��Ա������飬ȡ�����������
	//
	return 0;
}