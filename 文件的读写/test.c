#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//1.���ļ�
//	//�򿪳ɹ��Ļ������ص�����Ч��ָ��
//	//�����ʧ�ܣ��򷵻�NULL
//	FILE* pf = fopen("data.txt", "w");
//	FILE* pf = fopen("C:\\Users\\pc\\Desktop\\data.txt", "w");
//	//����·�������д����б��
//	FILE* pf = fopen(".\..\data.txt", "w");
//	//���·���������ʾ��ǰ�ļ���(.\)����һ���ļ���(..\)�е��ļ�
//	
//	//��һ��Ϊ�ļ������ڶ���Ϊ������ʽ
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//
//
//	//�ر��ļ�
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
//	//д�ļ�
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i,pf);
//		//����ַ�
//	}
//
//	//�ر��ļ�
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
	//���ļ�
	
	//��ȡ�ɹ���ʱ�򣬷��ض������ַ���ASCII��ֵ
	//��ȡʧ�ܵ�ʱ�򣬻᷵��EOF������Ϊ-1��
	//EOF -- end of file
	//�ļ��Ľ�����־

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

	//�ر��ļ�
	fclose(pf);
	pf = NULL;




	int ch1 = fgetc(stdin);//�Ӽ��̣���׼���������϶�ȡ
	fputc(ch1, stdout);//���ַ��������Ļ����׼�������






	return 0;
}