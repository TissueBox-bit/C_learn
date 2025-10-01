#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int f(int n)
{
	if (n == 1)
		return 1;
	else
		return f(n - 1) + 1;
}
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 3; i++)
	{
		j += f(i);
	}
	printf("%d", j);
	return 0;
}