#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;// ++a：加给a+1，结果为6，用加完之后的结果给c赋值，因此：a = 6  c = 6
	b = ++c, c++, ++a, a++;
	// 这里先算b=++c, b得到的是++c后的结果，b是7
	// b=++c 和后边的整体构成逗号表达式，依次从左向右计算的。
	// 表达式结束时，c++和，++a,a++会给a+2，给c加1，此时c：8，a：8，b:7
	b += a++ + c; // a先和c加，结果为16，在加上b的值7，比的结果为23，最后给a加1，a的值为9
	printf("a = %d b = %d c = %d\n:", a, b, c); // a:9, b:23, c:8
	return 0;
}