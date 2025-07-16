#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "abcdef";
	size_t len = strlen(arr);//本来是int但是由于长度为正整数，所以改为size_t（无符号整型），下面也跟着用%zd
	printf("%zd\n", len);

	//arr中元素为：a b c d e f \0
	//strlen其实统计的是字符串中\0之前的字符的个数
	return 0;
}