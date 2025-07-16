#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//strlen的库函数
#include<windows.h>//Sleep的库函数（S是大写）
#include<stdlib.h>//system的库函数

//练习1：多个字符从两端移动，向中间汇聚
//编写代码，演⽰多个字符从两端移动，向中间汇聚
int main()
{
	char arr1[] = "hello world!!!!!!";
	char arr2[] = "#################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休眠1000毫秒，为了让文字一顿一顿的展示
		system("cls");//清理控制台屏幕信息，使文字在同一行显示
		left++;
		right--;

	}
	printf("%s\n", arr2);
	return 0;
}
