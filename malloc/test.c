#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//malloc和free都声明在 stdlib.h 头⽂件中。
//最好成对使用
int main()
{
	//参数的单位是字节
	//申请空间成功的话，返回起始地址
	//申请失败，返回NULL
	int* p = (int*)malloc(10 * sizeof(int));
	//malloc返回的类型是void*
	if (p == NULL)
	{
		//空间开辟失败
		perror("malloc");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}

	//释放
	free(p);
	//free把p中空间释放
	//P指向的空间不属于当前程序，但还是能找到这个空间，-->p是野指针
	//所以要让p变成NULL
	p = NULL;


	//与数组的区别，数组不可改变大小，且为局部变量，会被操作系统自动销毁
	//malloc是动态内存，需手动创建及销毁（虽然不释放，在程序结束的时候也会被操作系统自动回收）
	//用不到的时候最好主动释放


	//void free(void* ptr)
	//如果参数 ptr 指向的空间不是动态开辟的，那free函数的⾏为是未定义的。会报错
	//如果参数 ptr 是NULL指针，则函数什么事都不做。
	return 0;
}