#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//qsort包含的函数

void qsort(void* base,//指向待排序数组的第一个元素的指针
			size_t num, //base指向数组中的元素个数
			size_t size, //base指向的数组中应该元素的大小，单位是字节
			int (*cmp)(const void*, const void*)//函数指针 — 传递函数的地址
			//因为不同的类型比较的方法不同，干脆把比较的部分分离出来，单独传参	
			);

//qsort默认是升序的，p1、p2交换位置就好

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
	//if (*(int*)p1 > *(int*)p2)//因为已经知道这个函数是用来比较整型的，所以直接转
	//	return 1;
	//else if (*(int*)p1 < *(int*)p2)
	//	return -1;
	//else
	//	return 0;
	return (*(int*)p1 - *(int*)p2);
}

//测试qsort排序整型数组
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
//测试qsort函数排序结构体数据
//按照名字比较两个结构体
//名字是字符串，字符串比较是使用strcmp函数的
//strcmp比较的不是字符串的长度而是对应位置上字符的大小
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