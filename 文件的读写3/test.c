#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//fprintf
//��ʽ�����������

//int main()
//{
//	char name[20] = "zhangsan";
//	int age = 20;
//	float score = 95.6f;
//	//1.���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	//2.д�ļ�
//	fprintf(pf, "%s %d %1f",name,age,score);
//	//3.�ر��ļ�
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
//��ʽ������


int main()
{
	char name[20];
	int age = 0;
	float score = 0;
	//1.���ļ�
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen()");
		return 1;
	}
	//2.���ļ�
	fscanf(pf, "%s %d %f", name, &age, &score);
	printf("%s %d %1f", name, age, score);
	//3.�ر��ļ�
	fclose(pf);
	pf = NULL;


	char arr2[20] = { 0 };
	fgets(arr2, 20, stdin);
	fputs(arr2, stdout);

	return 0;
}

//scanf/printf     ��Ա�׼����/������� ��ʽ�� ����/�������
//fscanf/fprintf   �����������/������� ��ʽ�� ����/�������
//sscanf/sprintf   ���ַ�������ȡ��ʽ��������/����ʽ��������ת�����ַ���

//sprintf ��ʵ�ǽ���ʽ��������д���ַ����У��������Ϊ����ʽ������ת�����ַ���
//sscanf  �Ǵ��ַ�������ȡ��ʽ�������ݣ��������Ϊ���ַ���ת�ɸ�ʽ��������

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
//	printf("%s\n", arr);//��Ϊsprintf�Ѿ������ݸ�ʽ������Ӧ������
//	
//	//sscanf�Ƿ�����
//	sscanf(arr, "%s %d %1f", tmp.name, &tmp.age, &tmp.score);
//	printf("%s %d %1f", tmp.name, tmp.age, tmp.score);
//	
//	return 0;
//}