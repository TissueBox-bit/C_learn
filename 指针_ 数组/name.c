#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", sizeof(arr));//结果是40

	printf("&arr[0] = %p\n", &arr[0]);
	printf("arr     = %p\n", arr);
	printf("&arr    = %p\n", &arr);
	printf("\n");
	printf("\n");

	//数组类型的比较：

	printf("&arr[0]   = %p\n", &arr[0]);
	printf("&arr[0]+1 = %p\n", &arr[0]+1);
	printf("\n");
	printf("arr       = %p\n", arr);
	printf("arr+1     = %p\n", arr+1);
	printf("\n");
	printf("&arr      = %p\n", &arr);
	printf("&arr+1    = %p\n", &arr+1);//相差40（一整个数组）

	//其实数组名是数组首元素的地址
	// 但有两个例外：
	// 1.sizeof（数组名）
	//    这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
	// 2.&数组名
	//    这里的数组名也表示整个数组，取出的是整个数组的地址
	// 除此之外，所有的数组名都表示数组首元素的地址
	//
	return 0;
}