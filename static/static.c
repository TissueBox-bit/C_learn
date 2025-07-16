#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
text()
{
	static int a = 1;
	//加了static后a成为静态变量，相当于全局变量，就不会再被a=1重复赋值
	//其实编译器在编译代码的时候，就为静态变量分配了地址，而不是进入函数创建这种变量
	//存储在静态区的变量和全局变量是⼀样的，⽣命周期就和程序的⽣命周期⼀样了，只有程序结束，变量才销毁，内存才
	//回收。但是作⽤域不变的。
	a++;
	printf("%d\n", a);
}
int main()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		text();
	}
	return 0;
}