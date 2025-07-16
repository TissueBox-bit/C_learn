#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	while (i >= 1 && i <= 10) {
		printf("%d\n", i);
		i = i++;
	}
		
	return 0;
}
