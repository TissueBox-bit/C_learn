#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//fputs
//
//int main()
//{
//	//1.���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	//2.д�ļ�
//	fputs("I am a student\n", pf);
//	fputs("Are you ok?\n", pf);
//	//3.�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//fgets


int main()
{
	//1.���ļ�
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen()");
		return 1;
	}
	//2.���ļ�
	char arr[20] = "xxxxxxxxxxxxxxxxxx";
	char arr1[20] = "xxxxxxxxxxxxxxxxxx";
	fgets(arr, 20, pf);//ֻ��4���������Ĭ��Ϊ\0
	fgets(arr1, 20, pf);//ֻ��4���������Ĭ��Ϊ\0
	//��ȡ��ʱ��ֱ������Ҫ������ޣ�������������ʱ��ͣ
	printf("%s\n", arr);
	printf("%s\n", arr1);
	//3.�ر��ļ�
	fclose(pf);
	pf = NULL;


	char arr2[20] = { 0 };
	fgets(arr2, 20, stdin);
	fputs(arr2, stdout);



	return 0;
}