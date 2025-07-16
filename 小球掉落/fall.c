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
	printf("请输入反弹次数：\n");
	scanf("%d", &n);
	for (high = 100, i = 1; high >= 0, i <= n; high = high / 2, i++)
	{
		printf("第%d次反弹的高度为%.2fm\n", i, high);
		Sleep(500);
		system("cls");
		all = high * 2 + all;
		if (high - 0.01 < 0)
		{
			printf("不会反弹这么多次");
			break;
		}
	}
	if (high - 0.01 >= 0)
	{
		all = all - 100;
		printf("第%d次反弹的高度为%.2fm\n", n, high * 2);
		printf("总路程为%.2fm\n", all);
	}
	return 0;
}

