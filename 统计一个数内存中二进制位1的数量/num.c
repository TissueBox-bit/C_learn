#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int count(unsigned int n)//��ֹ������Ǹ���
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}

int count(int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
			count++;
	}//1�Ķ�����ֻ�����һλ��1��ʹ�ð�λ��&������λ�̶�Ϊ0�������ж����һλ�Ƿ�Ϊ1
	//Ȼ�������Ʋ����ж����һλ
	return count;
}

int count_better(int n)
{
	int i = 0;
	int count = 0;
	while (n)
	{
		n = n & (n - 1);//ֱ��ȥ��n������λ���ұߵ�1
		count++;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = count(num);
	printf("%d", ret);
	return 0;
}