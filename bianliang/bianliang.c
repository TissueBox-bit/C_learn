#include<stdio.h>
#include<stdbool.h>
int n = 1000;//全局变量
int main()
{
	unsigned int age = 10;//这里为初始值（初始化）
	age = 20;//赋值
	printf("%u\n", age);
	char ch = 'q';//char表字符要用单引号
	float score = 3.14f;//打出来的小数默认为double类型，要在后面加一个f
	double wegiht = 4.5;//把鼠标放在数字上可以看出是什么类型
	bool flag = true;
	int n = 100;//局部变量
	printf("%d\n", n);//同名变量同时存在时局部优先
	return 0;
}