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
//	//�Զ����Ƶ���ʽд���ļ���
//
//	//1.���ļ�
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	//2.д�ļ�
//	fwrite(&s, sizeof(struct s), 1, pf);
//	//fwrite(const void* ptr,size_t size,size_t count, FILE * stream);
//	//��ptr��count����СΪsize���ֽڵ�����д���ļ���
//
//	//3.�ر��ļ�
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
	//��ȡ�����Ƶ���ʽд���ļ���

	//1.���ļ�
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen()");
		return 1;
	}
	//2.д�ļ�
	fread(&s, sizeof(struct s), 1, pf);
	//fread (void* ptr,size_t size,size_t count, FILE * stream);
	//���ļ��ж�ȡcount����СΪsize���ֽڵ����ݴ����ptrָ��Ŀռ���
	//���ص���ʵ�ʶ��������ݣ�ֱ������
	//���������ޣ���Ϊ���һ�ζ�ȡ

	printf("%s %d %f", s.name, s.age, s.score);

	//3.�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}