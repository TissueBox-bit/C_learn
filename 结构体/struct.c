#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct student
{
	char name[20];
	int age;
	char sex[20];
	float garde;
}s4 ,s5;//ȫ�ֱ���

struct student s3;//ȫ�ֱ���

//Ҳ�����ڽṹ�������struct
int main()
{
	struct student s1 = { "С����",10,"Ů",100.0 };//�ֲ�����
	struct student s2 = { "����",1,"��",0.0 };

	//ȡ���ṹ�嵱��ĳһ��
	//s1.name
	//
	printf("%s", s1.name);
	return 0;
}