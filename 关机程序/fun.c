#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//system 库函数，可以执行系统命令
//需要stdlib.h的头函数
//两个字符串比较相等的时候，不是使用==
//应该使用strcmp
//需要string.h的头函数
int main()
{
	char intput[20] = { 0 };
	system("shutdown -s -t 60"); 
again:
	printf("请注意，你的电脑将在60秒后关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", intput);//输入的信息放在 input数组中
	//判断input中存放的是不是“我是猪”
	if (strcmp("我是猪", intput) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}