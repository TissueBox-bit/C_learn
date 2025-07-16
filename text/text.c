#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int a;
void text(int a)
{
	scanf("%d", &a);
	printf("%d", a);
}
text2()
{
	printf("%d", a);
}
int main()
{
	printf("%d", a);
	text(a);
	printf("%d", a);
	text2();
	return 0;
}