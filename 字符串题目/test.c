#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	const char* str3 = "hello bit.";
	const char* str4 = "hello bit.";
	if (str1 == str2)
		printf("str1 and str2 are same\n");//1
	else
		printf("str1 and str2 are not same\n");//2

	if (str3 == str4)
		printf("str3 and str4 are same\n");//3
	else
		printf("str3 and str4 are not same\n");//4

	//结果输出2，3
	//这⾥str3和str4指向的是⼀个同⼀个常量字符串。C/C++会把常量字符串存储到单独的⼀个内存区域，
	//当⼏个指针指向同⼀个字符串的时候，他们实际会指向同⼀块内存。但是⽤相同的常量字符串去初始
	//化不同的数组的时候就会开辟出不同的内存块。所以str1和str2不同，str3和str4相同。
	return 0;
}