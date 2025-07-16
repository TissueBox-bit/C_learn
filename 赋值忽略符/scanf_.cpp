#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year, month, day;
	scanf("%d%*c%d%*c%d", &year, &month, &day);
	/*为了避免⽤⼾的输⼊可能不符合预定的格式，scanf() 提供了⼀个赋值忽略符，
	只要把 * 加在任何占位符的百分号后⾯，该占位符就不会返回值，解析后将被丢弃。*/
	printf("%d %d %d", year, month, day);
	return 0;
}