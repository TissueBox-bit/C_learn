#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x = 1;
	int a = 2;
	int b = 2;
	switch (x)
	{
	case 0:b++;
	case 1:a++;
	case 2:a++; b++;
	}
	printf("%d,%d", a, b);
	return 0;
}