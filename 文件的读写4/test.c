#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct s
{
	char name[20] ;
	int age ;
	float score;
};

//fwrite
//
//int main()
//{
//	struct s s = { "zhangsan",25,88.8f };
//	//以二进制的形式写到文件中
//
//	//1.打开文件
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	//2.写文件
//	fwrite(&s, sizeof(struct s), 1, pf);
//	//fwrite(const void* ptr,size_t size,size_t count, FILE * stream);
//	//将ptr中count个大小为size个字节的数据写到文件中
//
//	//3.关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

//fread

int main()
{
	struct s s = { 0 };
	//读取二进制的形式写到文件中

	//1.打开文件
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen()");
		return 1;
	}
	//2.写文件
	fread(&s, sizeof(struct s), 1, pf);
	//fread (void* ptr,size_t size,size_t count, FILE * stream);
	//从文件中读取count个大小为size个字节的数据存放在ptr指向的空间中
	//返回的是实际读到的数据，直到上限
	//若不足上限，则为最后一次读取

	printf("%s %d %f", s.name, s.age, s.score);

	//3.关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}