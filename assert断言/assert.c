#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
int main()
{
	int* p = NULL;
	assert(p != NULL);//要里面为真，否则中止程序
	//等价于
	//if (p != NULL)
	//{
	//	*p = 200;//不等于才能运行
	//}
	return 0;
}
