#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int cock, hen, chick;
	for (cock = 0; cock <= 20; cock++)
	{
		for (hen = 0; hen <= 33; hen++)
		{
			chick = 100 - cock - hen;
			if (chick % 3 == 0 && 5 * cock + 3 * hen + chick / 3 == 100)
			{
				printf("公鸡%d只；母鸡%d只；小鸡%d只\n", cock, hen, chick);
			}	
		}
	}
	return 0;
}