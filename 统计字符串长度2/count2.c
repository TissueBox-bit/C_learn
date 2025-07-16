#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个函数，统计字符串的长度
size_t my_strlen(char* p)
{
	char* start = p;
	char* end = p;
	while (*end != '\0')//直接写*end也行
	{
		end++;
		
	}
	return end-start;//指针相减
}
int main()
{
	char arr[] = "abcdef\0";
	size_t len = my_strlen(arr);//数组名其实是数组首元素的地址 arr == &arr[0]，所以形参应该为指针
	printf("%zd", len);
	return 0;
}