#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	pritnf("%zd\n", sizeof(arr));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	//ʹ��
	int i = 0;
	for (i = 0; i < sz; i++)//���������Լ�дi�����ޣ�����arr�����б仯Ҳ����
	{
		pritnf("%d", arr[i]);
	}


	/*int a = 0;
	printf("%zd", sizeof(a));//��λ���ֽ�
	printf("%zd", sizeof(int));*/

	return 0;
}