#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float arr[10];
	int i = 0;
	float sum = 0;
	float average = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &arr[i]);
		sum = sum + arr[i];
		if (sum >= 50000)
		{
			printf("һ�����%d��\n", i+1);
			break;
		}
	}
	average = sum / (i + 1);
	printf("ƽ������Ϊ%.2fԪ", average);
	return 0;
}