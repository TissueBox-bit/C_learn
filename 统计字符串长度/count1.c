#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//写一个函数，统计字符串的长度
//参数p指向的字符串不期望被修改，则在char前面加const
size_t my_strlen(const char* p)
{
	size_t count = 0;
	assert(p != NULL);
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef\0";
	size_t len = my_strlen(arr);//数组名其实是数组首元素的地址 arr == &arr[0]，所以形参应该为指针
	printf("%zd", len);
	return 0;
}