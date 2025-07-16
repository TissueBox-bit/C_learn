#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int mian()
{
	//申请10个整型空间
	//malloc(10*sizeof(int));
	int* p = (int*)calloc(10, sizeof(int));

	//区别：
	// 1.参数数量
	// 2.malloc不初始化，内容为随机值，calloc会初始化内容为0

	if (p == NULL)
	{
		perror("calloc");
		return 1;
	}
	//使用空间
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);//*(p+i)
	}


	//void* realloc(void* ptr,size_t size);
	//ptr 是要调整的内存地址（一定要是起始地址）
	 /*size 调整之后新⼤⼩
		• 返回值为调整之后的内存起始位置。
		• 这个函数调整原内存空间⼤⼩的基础上，还会将原来内存中的数据移动到 新 的空间。
		• realloc在调整内存空间的是存在两种情况：
		◦ 情况1：原有空间之后有⾜够⼤的空间（返回原来的地址）
		◦ 情况2：原有空间之后没有⾜够⼤的空间*/
	//1.如果后续的空间不够，realoc函数直接在内存的堆区找一块新的满足大小的空间
	//2.将旧的数据，拷贝到新的空间
	//3.释放旧的空间（不用free）
	//4.返回新的地址


	int* ptr = (int*)realloc(p, 20 * sizeof(int));
	if (ptr != NULL)
	{
		p = ptr;
	}//为了防止realloc拓展失败，把原来数据丢失，故重新命名

	//realloc也可以开辟空间，把第一个参数改为NULL即可

	//释放
	free(p);
	p = NULL;
	return 0;
}