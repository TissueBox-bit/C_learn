#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ð�������������ڵ�Ԫ�رȽϣ�������˳��ͽ��������������һ��
void input(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		scanf("%d", arr + i);
	}
}
void sort(int* arr, int sz)
{
	//ȷ����������һ�����Ƶ��׾���һ�ˣ�
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//�����Ѿ�����˳��
		//ÿһ���ڲ��Ƚ�
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;//����������
				//����
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
		if (flag == 1)//��ֹ���鱾����������˷�����ʱ��
		{
			break;
		}
	}
}
void pritnf(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr + i);
	}
}
int main()
{
	int arr[10] = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	input(arr, sz);

	sort(arr, sz);
	print(arr, sz);
	return 0;
}
