#define _CRT_SECURE_NO_WARNINGS 1

int Add(int x, int y)
{
	return x + y;
}

//
//函数也是具有外部属性的，只要在其他.c文件里面正确的声明，就能够使用
//同样static修饰函数，使函数的外部链接属性变成内部链接属性
//