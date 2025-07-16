#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int max(int x, int y, int z);
	int a, b, c, d;
	scanf("%d,%d,%d,", &a, &b, &c);
	d = max(a, b, c);
	printf("max=%d\n", d);
	return 0;
}
int max(int x, int y, int z)
{
	int t;
	if (x > y && x > z)t = x;
	else if (y > x && y > z)t = y;
	else t = z;
	return(t);
}