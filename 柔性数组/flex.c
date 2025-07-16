#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
//
//柔性数组：在结构体中最后一个元素，且数组未知大小
//

//两种写法
//struct s
//{
//	int i;
//	int a[];//柔性数组成员
//}type_a;
//struct st_type2
//{
//	int i;
//	int a[0];//柔性数组成员
//};

//结构中的柔性数组成员前⾯必须⾄少⼀个其他成员。
//• sizeof 返回的这种结构⼤⼩不包括柔性数组的内存。
//• 包含柔性数组成员的结构⽤malloc()函数进⾏内存的动态分配，并且分配的内存应该⼤于结构的⼤
//⼩，以适应柔性数组的预期⼤⼩。


//int main()
//{
//	printf("%d\n", sizeof(type_a));//输出的是4
//
//	int i = 0;
//	struct s* p = (struct s*)malloc(sizeof(struct s) + 20 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc()");
//		return 1;
//	}
//	//使用
//	p->i = 100;
//	for (i = 0; i < 20; i++)
//	{
//		p->a[i] = i;
//	}
//	//调整p指向空间的大小
//	struct s* ptr = (struct s*)realloc(p, sizeof(struct s) + 40 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//		return 1;
//	//使用
//	for (i = 0; i < 40; i++)
//	{
//		printf("%d ", p->a[i]);
//	}
//
//
//	free(p);
//	p = NULL;
//	return 0;
//}
//


//上面那种更好
struct s
{
	int i;
	int* a;//柔性数组成员
}type_a;
int main()
{
	struct s* ps = (struct s*)malloc(sizeof(struct s));
	if (ps == NULL)
	{
		perror("malloc");
		return 1;
	}
	int* tmp = (int*)malloc(20 * sizeof(int));
	if (tmp != NULL)
	{
		ps->a = tmp;
	}
	else
		return 1;
	ps->i = 100;
	int i = 0;
	//给arr中的20个元素赋值为1~20
	for (i = 0; i < 20; i++)
	{
		ps->a[i] = i + 1;
	}
	//只调整a的空间
	tmp = (int*)realloc(ps->a, 40 * sizeof(int));
	if (tmp != NULL)
	{
		ps->a = tmp;
	}
	else
		return 1;
	for (i = 0; i < 40; i++)
	{
		printf("%d ", ps->a[i]);
	}

	//释放
	free(ps->a);
	ps->a = NULL;
	free(ps);
	ps = NULL;
	return 0;
}