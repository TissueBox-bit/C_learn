#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	printf("请输入成绩\n");
	scanf("%d", &i);
	if (i >= 0 && i <= 100)
	{
		int level = (int)(i / 5);
		switch (level)
		{
		case 20:
		case 19:
		case 18:
			printf("excellent");
			break;
		case 17:
		case 16:
		case 15:
			printf("average");
			break;
		case 14:
		case 13:
		case 12:
			printf("passed");
			break;
		default:
			printf("failed");
			break;

		}
	}
	else
		printf("您输入的成绩不符合要求");
	return 0;
}

