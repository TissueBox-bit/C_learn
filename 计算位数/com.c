#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//����һ�����������ж�λ��
	int n = 0;
	int num = 0;
	scanf("%d", &n);
	for (num = 0; n != 0; n = n / 10)
	{
		num++;
	}
	printf("%d", num);
	return 0;
}

