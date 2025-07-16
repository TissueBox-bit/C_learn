#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%zd\n", sizeof(a));//16
	//数组a单独放在sizeof内部，a表示整个数组，计算的是整个数组的大小，单位是字节
	printf("%zd\n", sizeof(a + 0));//4（X86）/8(X64)
	//这里的a是数组名表示首元素的地址，a+0还是首元素的地址
	//这里sizeof计算的是首元素地址是大小
	printf("%zd\n", sizeof(*a));//4
	//这里的a是数组名表示首元素的地址，*a就是首元素，就是a[0]
	//*a -- *(a+0) -- a[0]
	printf("%zd\n", sizeof(a + 1));//  4/8
	//这里的a是数组名表示首元素的地址，a+1是第二个元素的地址（&a[1]）
	//计算的是地址的大小
	printf("%zd\n", sizeof(a[1]));//4
	printf("%zd\n", sizeof(&a));//   4/8
	//&a - 这里的数组名a表示整个数组，&a是整个数组的地址
	//数组的地址也是地址，是地址就是 4/8 个字节的长度
	printf("%zd\n", sizeof(*&a));//16
	//1.*&a，这里的*和&抵消了，所以sizeof（*&a） ==  sizeof(a)
	//2.&a - 这是数组的地址，类型的int（*）[4],*&a访问放的就是这个数组
	printf("%zd\n", sizeof(&a + 1));//   4/8
	//&a是数组的地址，&a+1是跳过整个数组后的那个位置的地址
	//&a+1是地址，地址都是4/8个字节
	printf("%zd\n", sizeof(&a[0]));//   4/8
	printf("%zd\n", sizeof(&a[0] + 1));//第二个元素的地址  4/8


	char arr[] = { 'a','b','c','d','e','f' };
	printf("%zd\n", sizeof(arr));//6
	printf("%zd\n", sizeof(arr + 0));//  4/8
	printf("%zd\n", sizeof(*arr));//1
	printf("%zd\n", sizeof(arr[1]));//1
	printf("%zd\n", sizeof(&arr));//  4/8
	printf("%zd\n", sizeof(&arr + 1));//  4/8
	printf("%zd\n", sizeof(&arr[0] + 1));//   4/8


	char arr[] = { 'a','b','c','d','e','f' };
	printf("%zd\n", strlen(arr));//随机值
	printf("%zd\n", strlen(arr + 0));//随机值
	printf("%zd\n", strlen(*arr));//
	//arr是数组名表示首元素的地址
	//*arr 是首元素 -- 'a' - 97，传递给strlen后，strlen会认为97就是地址，然后去访问内存
	//结果：err -- 程序崩溃
	printf("%zd\n", strlen(arr[1]));//'b' - 98  -- err
	printf("%zd\n", strlen(&arr));//随机值
	printf("%zd\n", strlen(&arr + 1));//随机值
	printf("%zd\n", strlen(&arr[0] + 1));//随机值



	//数组名是首元素的地址
	//2个例外：
	//1.szieof（数组名）
	//2.&数组名


	char arr[] = "abcdef";
	// a b c d e f \0
	printf("%zd\n", sizeof(arr));//7
	//数组名单独放在sizeof内部，计算的是数组的大小
	printf("%zd\n", sizeof(arr + 0));//  4/8
	//arr+0是数组首元素的地址，既然是地址，那就是4/8
	printf("%zd\n", sizeof(*arr));//1
	printf("%zd\n", sizeof(arr[1]));//1
	printf("%zd\n", sizeof(&arr));//  4/8
	printf("%zd\n", sizeof(&arr + 1));//  4/8
	printf("%zd\n", sizeof(&arr[0] + 1));//  4/8


	char arr[] = "abcdef";
	printf("%zd\n", strlen(arr));//6
	//arr是首元素的地址，strlen是从第一个元素开始统计\0之前的字符个数
	printf("%zd\n", strlen(arr + 0));//随机值
	//arr是首元素的地址，arr+0还是首元素的地址
	printf("%zd\n", strlen(*arr));//err
	//*arr 是首元素 -- 'a' - 97，传递给strlen后，strlen会认为97就是地址，然后去访问内存
	//结果：err -- 程序崩溃
	printf("%zd\n", strlen(arr[1]));//err同上
	printf("%zd\n", strlen(&arr));//6
	//&arr是数组的地址，数组的地址和数组首元素的地址指向同一个位置
	//那么strlen也是从第一个元素的位置开始向后访问的
	printf("%zd\n", strlen(&arr + 1));//随机值
	printf("%zd\n", strlen(&arr[0] + 1));//5
	//从第二个元素开始统计


	char* p = "abcdef";
	printf("%zd\n", sizeof(p));//   4/8
	//p是指针变量，计算的是指针变量p的大小
	printf("%zd\n", sizeof(p + 1));//  4/8
	//p+1是第二个元素的地址，地址大小就是4/8
	printf("%zd\n", sizeof(*p));//1
	//p的类型是char*，所以只能访问1个字节
	printf("%zd\n", sizeof(p[0]));//1
	//p[0] --> *(p+0) -- *p -- 一个字节
	printf("%d\n", sizeof(&p));//   4/8
	//&p是指针变量p的地址，也是地址
	//&p -- char** -- 二级指针
	printf("%zd\n", sizeof(&p + 1));//   4/8
	//&p是指针变量p的地址，&p+1是跳过p变量，指向p的后面
	//&p+1是地址
	printf("%zd\n", sizeof(&p[0] + 1));//  4/8
	//&p[0] + 1就是b的地址
	//p[0] --   *(p+0) -- *p



	char* p = "abcdef";
	printf("%zd\n", strlen(p));//6
	printf("%zd\n", strlen(p + 1));//5
	printf("%zd\n", strlen(*p));//err
	printf("%zd\n", strlen(p[0]));//err
	printf("%zd\n", strlen(&p));//随机值（在p地址里面找\0）
	printf("%zd\n", strlen(&p + 1));//随机值
	printf("%zd\n", strlen(&p[0] + 1));//5


	int a[3][4] = { 0 };
	printf("%zd\n", sizeof(a));//48
	//a作为数组名，单独放在sizeof内部，a表示的是整个数组，计算的是整个数组的大小，单位是字节
	printf("%zd\n", sizeof(a[0][0]));//4
	//a[0][0]是第一行第一个元素，大小是4个字节
	printf("%zd\n", sizeof(a[0]));//16
	//a[0]是第一行的数组名，单独放在sizeof内部，计算的是数组的大小
	printf("%zd\n", sizeof(a[0] + 1));//   4/8
	//a[0]是第一行的数组名，但是没有单独放在sizeof内部，a表示首元素的地址 - 也就是第一行的地址 -- &a[0][0]
	//a[0]+1 == &a[0][0]+1 == &a[0][1]
	//地址的大小4/8
	printf("%zd\n", sizeof(*(a[0] + 1)));//4
	//是第一行第二个元素，大小是4个字节
	printf("%zd\n", sizeof(a + 1));//   4/8
	//a是二维数组的数组名，并没有单独放在sizeof内部，a表示首元素的地址- 也就是第一行的地址
	//a+1 是第二行的地址，是地址就是4/8
	printf("%zd\n", sizeof(*(a + 1)));//16
	//1.*（a+1） -- a[1]是第二行的数组名，单独放在sizeof内部，计算的是第二行的大小
	//2.a+1是第二行的地址，类型是int(*)[4],数组指针，解引用访问的是这个数组，大小是16个字节
	printf("%zd\n", sizeof(&a[0] + 1));//  4/8
	//a[0]是第一行的数组名，&数组名其实就是第一行的地址，&a[0]+1就是第二行的地址，是地址就是4/8
	printf("%zd\n", sizeof(*(&a[0] + 1)));//16
	printf("%zd\n", sizeof(*a));//16
	//1.a -- 首元素的地址（第一行的地址），*a是第一行
	//2.*a --- *（a+0） -- a[0]
	printf("%zd\n", sizeof(a[3]));//16
	//sizeof内部表达式是不会真实计算的
	//a[3] -- 第四行的数组名 int[4]


	return 0;
}