#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void sort(int arr[],int sz)
//���β�Ϊ���飬���˻�Ϊָ�룬��ʱ���޷��ں�������������鳤�ȣ�����Ҫ���⽨һ���β�
{
	int j = 0;
	int i = 0;
	for (j = 0; j < sz; j++)
	{
		if (arr[j] < arr[j + 1])
		{
			int t = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = t;
		}
	}
	printf("����������Ϊ��");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int a[10] = { 4,6,-5,8,7,3,10,9,-8,22 };
	int b[6] = { -6,0,8,99,25,-7 };
	sort(a, sizeof(a) / sizeof(a[0]));
	sort(b, sizeof(b) / sizeof(b[0]));
	return 0;
}