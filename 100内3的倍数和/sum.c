#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 1; i <= 100; i++)
	//Ҳ����ֱ����i=3��ÿ��i+=3
	{
		if (i % 3 == 0)
			sum = sum + i;
	}
	printf("1��100��3�ı�����Ϊ%d", sum);
	return 0;
}

