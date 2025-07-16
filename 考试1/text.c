#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
fun(float x)
{
	float y;
	if (x < 1)
	{
		if (x >= 0)
			y = x;
		else
			y = -x;
	}
	else if (x >= 10)
	{
		y = 3 * x - 11;
	}
	else
	{
		y = x / 2 - 1;
	}
	return y;
}
int main()
{
	float x = 0;
	
	scanf("%f", &x);
	float y = fun(x);
	printf("y=%.2f", y);
	return 0;
}