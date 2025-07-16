#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int count(unsigned int n)//防止输入的是负号
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}

int count(int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
			count++;
	}//1的二进制只有最后一位是1，使用按位与&则其他位固定为0，可以判断最后一位是否为1
	//然后再右移不断判断最后一位
	return count;
}

int count_better(int n)
{
	int i = 0;
	int count = 0;
	while (n)
	{
		n = n & (n - 1);//直接去掉n二进制位最右边的1
		count++;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = count(num);
	printf("%d", ret);
	return 0;
}