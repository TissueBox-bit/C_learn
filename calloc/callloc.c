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
	//释放
	free(p);
	p = NULL;
	return 0;
}