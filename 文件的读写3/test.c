#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//fprintf
//格式化的输出函数

//int main()
//{
//	char name[20] = "zhangsan";
//	int age = 20;
//	float score = 95.6f;
//	//1.打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	//2.写文件
//	fprintf(pf, "%s %d %1f",name,age,score);
//	//3.关闭文件
//	fclose(pf);
//	pf = NULL;
//
//
//	char arr2[20] = { 0 };
//	fgets(arr2, 20, stdin);
//	fputs(arr2, stdout);
//
//	return 0;
//}


//fscanf
//格式化输入


int main()
{
	char name[20];
	int age = 0;
	float score = 0;
	//1.打开文件
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen()");
		return 1;
	}
	//2.读文件
	fscanf(pf, "%s %d %f", name, &age, &score);
	printf("%s %d %1f", name, age, score);
	//3.关闭文件
	fclose(pf);
	pf = NULL;


	char arr2[20] = { 0 };
	fgets(arr2, 20, stdin);
	fputs(arr2, stdout);

	return 0;
}

//scanf/printf     针对标准输入/输出流的 格式化 输入/输出函数
//fscanf/fprintf   针对所有输入/输出流的 格式化 输入/输出函数
//sscanf/sprintf   从字符串中提取格式化的数据/将格式化的数据转换成字符串

//sprintf 其实是将格式话的数据写到字符串中，可以理解为将格式化数据转化成字符串
//sscanf  是从字符串中提取格式化的数据，可以理解为将字符串转成格式化的数据

//
//struct s
//{
//	char name[20] ;
//	int age ;
//	float score;
//};
//int main()
//{
//	char arr[100] = { 0 };
//	char name[20] = "zhangsan";
//	int age = 20;
//	float score = 95.6f;
//	struct s tmp = { 0 };
//	sprintf(arr,"%s %d %1f", name, age, score);
//
//	printf("%s\n", arr);//因为sprintf已经讲数据格式化进对应的数组
//	
//	//sscanf是反过来
//	sscanf(arr, "%s %d %1f", tmp.name, &tmp.age, &tmp.score);
//	printf("%s %d %1f", tmp.name, tmp.age, tmp.score);
//	
//	return 0;
//}