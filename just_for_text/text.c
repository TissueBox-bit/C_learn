#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	if (a < 5)
		b = 3;
	else
		b = -3;
	//Ҳ����д����������Ŀ��������
	int c = 0;
	int d = 0;
	scanf("%d", &c);
	b = (a < 5 ? 3 : -3);

	int e = 0;
	int f = 0;
	scanf("%d%*c%d", &e, &f);
	int m = (e > f ? e : f);
	printf("m=%d", m);

	return 0;
}