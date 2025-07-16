#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*char arr[] = "abcdef";
	char* p = arr;*/
	//等价于
	const char* p = "abcdef";//由于不可修改内容，故直接在前面加const
	//这里的赋值是将字符串中的首字符的地址赋值给p
	printf("%c\n", *p);//a
	printf("%s\n", p);//使用%s打印字符串的时候，只需要提供首字母的地址就行
	return 0;
}