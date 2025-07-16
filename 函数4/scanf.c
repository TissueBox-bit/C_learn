#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char name[20] = { 0 };
	int high = 0;
	char c[20] = { 0 };
	char d[20] = { 0 };
	printf("请选择你的角色：张三/李四/王五\n");
	scanf("%s", &name);//&为取地址操作符，因为name是一个变量所以需要加&
	printf("请选择角色身高：");
	scanf("%d", &high);
	printf("请选择角色武器：");
	scanf("%s", &c);
	printf("请选择角色门派：");
	scanf("%s", &d);
	printf("你的身份：\n");
	printf("%s\n", name);
	printf("%d\n", high);
	printf("%s\n", c);
	printf("%s\n", d);
	return 0;
}