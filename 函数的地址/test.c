#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	pritnf("%p\n", &Add);
	pritnf("%p\n", Add);
	//&函数名和函数名都是函数的地址，没有区别

	int (*pf)(int, int) = &Add;//pf指针变量
	int (*pf)(int x, int y) = &Add;//这样写也可以
	//int(*)(int,int)函数指针类型

	//调用
	int ret = (*pf)(4, 5);
	//int ret = pf(4, 5);也可以不写
	printf("%d\n", ret);

	//有趣的代码

	(*(void(*)())0)();
	//void(*)()函数指针类型
	//(void(*)())强制类型转换
	//意思：是一次函数调用，调用0地址处放的那个函数
	//0地址处放的这个函数没有参数，返回类型是void

	void(*signal(int, void(*)(int)))(int);
	//上面的代码是一次函数声明
	//函数的名字叫：signal
	//signal函数的参数有两个
	//第一个参数的类型是int
	//第二个的类型是 --- 一种函数指针 void(*)(int)
	//		该函数指针指向的函数参数是int，返回类型是void
	//signal函数的返回类型也是一个函数指针变量，类型是void(*)(int)  —————最外面那一层（最左到最右）
	//		该函数指针指向的函数参数是int，返回类型是void
	return 0;
}