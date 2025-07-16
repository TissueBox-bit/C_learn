#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fab(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	int i = 0;
	for (i = 1; i <= n - 2; i++)
	{
		c = a + b; 
		a = b; 
		b = c;
	}
	//也可以这么写
	/*while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}*/
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int r = Fab(n);
	printf("%d", r);
	return 0;
}