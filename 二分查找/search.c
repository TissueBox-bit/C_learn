#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����strlen����Ϊstrlen�����ַ������ȵģ�������ַ��������ַ��������
	int left = 0;
	int right = sz - 1;

	int flag = 0;//����0Ϊ�Ҳ���

	while(left<=right)
	{
		int mid = (left + right) / 2;//������ܷ����棬��Ϊÿһ��mid���仯
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
			printf("��Ѱ�ҵ����±�Ϊ%d,����Ϊ%d\n", mid,arr[mid]);
			flag = 1;
			break;
		}
	}

	if (flag == 0)//����!flag
	{
		printf("�Ҳ���\n");
	}
	return 0;
}
