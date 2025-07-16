#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	float f = 0.0;
	int r = scanf("%d %d %f", &a, &b, &f);//scanf() 的返回值是⼀个整数，表⽰成功读取的变量个数。类型为int
	printf("a=%d b=%d f=%f\n", a,b,f);
	printf("r=%d\n", r);
	//如果没有读取任何项，或者匹配失败，则返回 0 。
	//如果在成功读取任何数据之前，发⽣了读取错误或者遇到读取到⽂件结尾，则返回常量 EOF(-1)。
	//EOF - end of file ⽂件结束标志

	//如果想要提前结束输入，按三次CTRL+z
	char str[10];
	scanf("%[abc]", str);
	printf("输入的字符串是：%s\n", str);
	//“%[]” 允许你指定一个字符集合，scanf 函数会读取输入直到遇到不在这个集合中的字符为止。
	// 例如，“%[abc]” 表示读取输入，直到遇到不是 'a'、'b'、'c' 的字符为止。被读取的字符会存储到对应的字符数组中。
	return 0;
}