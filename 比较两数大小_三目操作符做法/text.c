#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//比较两个数大小
	int e = 0;
	int f = 0;
	scanf("%d,%d", &e, &f);
	int m = (e > f ? e : f);
	printf("m=%d", m);


	return 0;
}