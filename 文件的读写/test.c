#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//1.打开文件
//	//打开成功的话，返回的是有效的指针
//	//如果打开失败，则返回NULL
//	FILE* pf = fopen("data.txt", "w");
//	FILE* pf = fopen("C:\\Users\\pc\\Desktop\\data.txt", "w");
//	//绝对路径，最好写两个斜杠
//	FILE* pf = fopen(".\..\data.txt", "w");
//	//相对路径，这里表示当前文件夹(.\)的上一个文件夹(..\)中的文件
//	
//	//第一个为文件名，第二个为操作方式
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//


//fputc

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i,pf);
//		//输出字符
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

//fgetc

int main()
{
	FILE* pf = fopen("data.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//读文件
	
	//读取成功的时候，返回读到的字符的ASCII码值
	//读取失败的时候，会返回EOF（本质为-1）
	//EOF -- end of file
	//文件的结束标志

	//int ch = fgetc(pf);
	//printf("%c\n", ch);
	//ch = fgetc(pf);
	//printf("%c\n", ch);
	//ch = fgetc(pf);
	//printf("%c\n", ch);
	//ch = fgetc(pf);
	//printf("%c\n", ch);
	//ch = fgetc(pf);
	//printf("%c\n", ch);

	//int len = strlen(*pf);
	//for (int i = 0; i < len; i++)
	//{
	//	ch = fgetc(pf);
	//	printf("%c\n", ch);
	//}

	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c ", ch);
	}

	//关闭文件
	fclose(pf);
	pf = NULL;




	int ch1 = fgetc(stdin);//从键盘（标准输入流）上读取
	fputc(ch1, stdout);//将字符输出到屏幕（标准输出流）






	return 0;
}