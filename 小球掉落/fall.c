#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	float high = 0;
	int i = 0;
	float all = 0;
	int n = 0;
	printf("�����뷴��������\n");
	scanf("%d", &n);
	for (high = 100, i = 1; high >= 0, i <= n; high = high / 2, i++)
	{
		printf("��%d�η����ĸ߶�Ϊ%.2fm\n", i, high);
		Sleep(500);
		system("cls");
		all = high * 2 + all;
		if (high - 0.01 < 0)
		{
			printf("���ᷴ����ô���");
			break;
		}
	}
	if (high - 0.01 >= 0)
	{
		all = all - 100;
		printf("��%d�η����ĸ߶�Ϊ%.2fm\n", n, high * 2);
		printf("��·��Ϊ%.2fm\n", all);
	}
	return 0;
}

