#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*在C语⾔中，0为假(不成立)，⾮0表⽰真（成立）*/
	int num = 10;
	if (num)
		printf("hehe\n");
	int n = 0;
	if(n)
		printf("heihei\n");
	//判断是否为奇数
	//int m = 0;
	//输入
	scanf("%d", &num);
	//判断与输出
	if (num % 2 == 1)
		printf("%d是奇数\n", num);
	else
		printf("笨蛋你打的数不是奇数\n");

	return 0;


}