#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int i = 0;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		break;//会中止循环
	//	printf("%d ", i);
	//	i++;
	//}

	//int n = 0;
	//while (n <= 10)
	//{
	//	if (n == 5)
	//		continue;//跳过下方代码一次，同上面，因为n无法++
	//	printf("%d ", n);
	//	n++;
	//}

	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}
