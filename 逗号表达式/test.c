#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//逗号表达式，从左向右依次执⾏。整个表达式的结果是最后⼀个表达式的结果。
int main()
{
	//代码1
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
	//c是多少？
	//代码2
	int d = 0;
	if (a = b + 1, c = a / 2, d > 0)
		//代码3
		a = get_val();
	count_val(a);
	while (a > 0)
	{
		//业务处理
		//...
		a = get_val();
		count_val(a);
	}
	//如果使⽤逗号表达式，改写：
	while (a = get_val(), count_val(a), a > 0)
	{
		//业务处理
	}
	return 0;
}