#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����1!+2!+3!+...+10!�ĺ�
int main()
{
	int n = 0;
	int i = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		int ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}

	//�Ż�
	/*int ret = 1;
	for (n = 1; n <= 10; n++)
	{	
		ret *= n;
		sum += ret;
	}*/

	printf("%d", sum);
	return 0;
}