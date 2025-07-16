#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	//不用strlen是因为strlen是求字符串长度的，是针对字符串或者字符串数组的
	int left = 0;
	int right = sz - 1;

	int flag = 0;//假设0为找不到

	while(left<=right)
	{
		int mid = (left + right) / 2;//这个不能放外面，因为每一次mid都变化
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("所寻找的数下标为%d,具体为%d\n", mid,arr[mid]);
			flag = 1;
			break;
		}
	}

	if (flag == 0)//或者!flag
	{
		printf("找不到\n");
	}
	return 0;
}
