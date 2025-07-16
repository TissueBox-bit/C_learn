#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//fputs
//
//int main()
//{
//	//1.打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	//2.写文件
//	fputs("I am a student\n", pf);
//	fputs("Are you ok?\n", pf);
//	//3.关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//fgets


int main()
{
	//1.打开文件
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen()");
		return 1;
	}
	//2.读文件
	char arr[20] = "xxxxxxxxxxxxxxxxxx";
	char arr1[20] = "xxxxxxxxxxxxxxxxxx";
	fgets(arr, 20, pf);//只读4个，第五个默认为\0
	fgets(arr1, 20, pf);//只读4个，第五个默认为\0
	//读取的时候，直到到达要求的上限，或则遇到换行时暂停
	printf("%s\n", arr);
	printf("%s\n", arr1);
	//3.关闭文件
	fclose(pf);
	pf = NULL;


	char arr2[20] = { 0 };
	fgets(arr2, 20, stdin);
	fputs(arr2, stdout);



	return 0;
}