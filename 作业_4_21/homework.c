#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max(int arr[],int sz)
{
	int i = 0;
	int max = 0;
	for (i = 1,max=arr[0]; i < sz; i++)
	{
		max = (max > arr[i]) ? max : arr[i];
	}
	return max;
}
int main()
{
	int class_1[5] = { 5,52,5,64,78 };
	int class_2[10] = { 99,2,5,4,6,5,52,5,64,78 };
	int sz_1 = sizeof(class_1) / sizeof(class_1[0]);
	int sz_2 = sizeof(class_2) / sizeof(class_2[0]);
	int max_1 = max(class_1,sz_1);
	int max_2 = max(class_2,sz_2);
	printf("%d %d", max_1, max_2);
	return 0;
}