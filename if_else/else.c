#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	/*输⼊⼀个⼈的年龄
	如果年龄 < 18岁，打印"少年"
	如果年龄在18岁⾄44岁打印"⻘年"
	如果年龄在45岁⾄59岁打印"中⽼年"
	如果年龄在60岁⾄89岁打印"⽼年"
	如果90岁及以上打印"⽼寿星"*/

	int age = 0;
	scanf("%d", &age);
	if (age <= 18)
		printf("少年\n");
	else if (age <= 44)
		printf("⻘年\n");
	else if (age <= 59)
		printf("中老年\n");
	else if (age <= 89)
		printf("老年\n");
	else
		printf("老寿星\n");
	return 0;

	
}