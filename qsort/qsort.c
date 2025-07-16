#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//qsort�����ĺ���

void qsort(void* base,//ָ�����������ĵ�һ��Ԫ�ص�ָ��
			size_t num, //baseָ�������е�Ԫ�ظ���
			size_t size, //baseָ���������Ӧ��Ԫ�صĴ�С����λ���ֽ�
			int (*cmp)(const void*, const void*)//����ָ�� �� ���ݺ����ĵ�ַ
			//��Ϊ��ͬ�����ͱȽϵķ�����ͬ���ɴ�ѱȽϵĲ��ַ����������������	
			);

//qsortĬ��������ģ�p1��p2����λ�þͺ�

void Print(int arr[], int sz)
{
	int i = 0;
	for(i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_int(const void* p1, const void* p2)
{
	//if (*(int*)p1 > *(int*)p2)//��Ϊ�Ѿ�֪����������������Ƚ����͵ģ�����ֱ��ת
	//	return 1;
	//else if (*(int*)p1 < *(int*)p2)
	//	return -1;
	//else
	//	return 0;
	return (*(int*)p1 - *(int*)p2);
}

//����qsort������������
void test1()
{
	int arr[] = { 3,8,4,6,9,7,1,5,2,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	Print(arr, sz);
}


struct Stu
{
	char name[20];
	int age;
};
//����qsort��������ṹ������
//�������ֱȽ������ṹ��
//�������ַ������ַ����Ƚ���ʹ��strcmp������
//strcmp�ȽϵĲ����ַ����ĳ��ȶ��Ƕ�Ӧλ�����ַ��Ĵ�С
int cmp_Stu_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);

}

void test2()
{
	struct Stu arr[] = { {"zhangsan",20},{"lisi",35},{"wangwu",17} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_Stu_name);
}

int cmp_Stu_age(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name - ((struct Stu*)p2)->name);

}
void test3()
{
	struct Stu arr[] = { {"zhangsan",20},{"lisi",35},{"wangwu",17} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_Stu_age);
}

int main()
{
	test1();
	test2();
	test3();
	return 0;
}