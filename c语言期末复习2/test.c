#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//计算1~100以内所有偶数之和。

//int main()
//{
//	int i = 2;
//	int sum = 0;
//	while (i <= 100)
//	{
//		if (i % 2 == 0)
//		{
//			sum += i;
//		}
// 
//		i++;
//	}
//	printf("计算1~100以内所有偶数之和:%d", sum);
//	return 0;
//}
//

//输入一个小写字符，根据以下规则输出相应的加密字符。   
//a->d
//b->e
//……
//w->z
//x->a
//y->b
//z->c

//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch >= 'a' && ch <= 'z')
//	{
//		if (ch + 3 <= 'z')
//		{
//			printf("%c", ch + 3);
//		}
//		else
//			ch = ch + 3 - 26;
//	}
//	else
//		perror("err");
//	return 0;
//}
//

//百元百鸡问题：公鸡每只5元，母鸡每只3元，
// 小鸡3只1元,问100元买100只鸡的所有组合。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 0; a < 20; a++)
//	{
//		for (b = 0; b < 34; b++)
//		{
//			c = 100 - a - b;
//			if (a * 5 + b * 3 + c / 3 == 100 && c % 3 == 0)
//			{
//				printf("公鸡：%d，母鸡：%d，小鸡：%d\n", a, b, c);
//			}
//		}
//	}
//	return 0;
//}
//

//编写程序，输入一个大写字母，输出相应图，如输入D
//A
//BB
//CCC
//DDDD

//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch >= 'A' && ch <= 'Z')
//	{
//		for (int i = 0; i <= ch - 'A'; i++)
//		{
//			int j = i;
//			while(j >= 0)
//			{
//				printf("%c", 'A' + i);
//				j--;
//			}
//			printf("\n");
//
//		}
//	}
//	else
//		perror("err");
//	return 0;
//}
//

//输入一串字符统计里面字母和数字各自的字数

//int main()
//{
//	char ch[100];
//	gets(ch);
//	int num = 0;//字母
//	int count = 0;//数字
//	int i = 0;
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = ch[i];
//		if (j >= '0' && j <= '9')
//			count++;
//		else if (j >= 'A' && j <= 'z')
//			num++;
//	}
//	printf("数字数量为：%d，字母数量为：%d", count, num);
//	return 0;
//}
//

//定义一个长度为10的整形数组并为它初始化10个随机数，计算这数组中所有元素的平均值。

//int main()
//{
//	int arr[10];
//	int sum = 0;
//	int i = 0;
//	float average = 0;
//	srand((unsigned int)time(NULL));
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = rand();
//		sum += arr[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("数组为：%d\n", arr[i]);
//	}
//	average = sum / 10;
//	
//	printf("数组的元素平均值为:%f\n", average);
//	return 0;
//}
//

//在一个程序中，编写一个函数求两个整数的最大公约数、
// 另一个函数求两个整数的最小公倍数，主函数中键盘输入两个整数a、b，
// 调用上述两函数，该求a和b的最大公约数和最小公倍数。

int t(int a, int b)
{
	while (b != 0)
	{
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}
int i(int a, int b)
{
	return a / t(a, b) * b;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int t1 = t(a, b);//公因数
	int t2 = i(a, b);//公倍数
	printf("%d", t1);
	printf("%d", t2);
	return 0;
}