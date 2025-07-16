#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	printf("请输入成绩：\n");
	scanf("%d", &i);
	if (i >= 90 && i <= 100)
		printf("excellent\n");
	else
	{
		if (i >= 75 && i < 90)
			printf("average\n");
		else
		{
			if (i >= 60 && i < 75)
				printf("passed\n");
			else
			{
				if (i < 60)
					printf("failed\n");
				else
					printf("您输入的成绩不符合要求\n");
			}
		}
	}
	return 0;
}

