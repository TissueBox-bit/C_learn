#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define INT_MAX 0b1111111111111111111111111111111
//��һ���ж��ַ���mid��©������left��right�ӽ����ֵINT_MAX�����֮��ᳬ�����ֵ
//INT_MAX=2147483647
int main()
{
	//��������
	int a = 2147483646;
	int b = 2147483646;
	int c = 0;
	int d = 0;
	int avg = 0;
	c = (a < b) ? a : b;
	d = (a > b) ? a : b;
	avg = c + (d - c) / 2;
	printf("%d", avg);

	//���Զ��ַ�����mid�Ϳ���д��
	//mid = left+(right-left)/2;
	//��Ϊ�϶�left<right
	return 0;
}