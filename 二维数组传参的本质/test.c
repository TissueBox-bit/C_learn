#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
Printf(int(*arr)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(arr+i))+j);//��ʵarr[i]��ʾ����&arr[i][0]
		}
		printf("\n");
	}
}
int main()
{
	//��ά�����������Ҳ��������Ԫ�صĵ�ַ
	//��ά����������Ϊһά���������
	//���Զ�ά�������������������һ�еĵ�ַ
	int arr[3][5] = { {1,2,3,4,5}, { 2,3,4,5,6 }, { 3,4,5,6,7 } };
	Printf(arr, 3, 5);

	return 0;
}