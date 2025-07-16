#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct student
{
	char name[20];
	int age;
	char sex[20];
	float garde;
}s4 ,s5;//全局变量

struct student s3;//全局变量

//也可以在结构体里面放struct
int main()
{
	struct student s1 = { "小茄子",10,"女",100.0 };//局部变量
	struct student s2 = { "喵呜",1,"公",0.0 };

	//取出结构体当中某一个
	//s1.name
	//
	printf("%s", s1.name);
	return 0;
}