#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	printf("1��100����ż����Ϊ%d", sum);
	return 0;
}