#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 20;
	printf("%p\n", &a);
	//取地址类型是%p，取的是第一个字节的地址，因为有了第一个字节，就能知道剩余三个字节的地址
	int* pa = &a;
	//pa是一个变量，这个变量是用来存放地址的（指针），pa叫指针变量，int*是pa的类型
	//*表示pa是指针变量
	//int表示pa指向的变量a的类型是int
	*pa = 200;//*解引用
	//即把变量a赋值为200


	printf("%zd\n", sizeof(pa));
	//X86（32位）环境下是4字节
	//X64（64位）环境下是8字节
	//指针变量的大小只与环境有关，与其对应变量类型无关
	return 0;
}