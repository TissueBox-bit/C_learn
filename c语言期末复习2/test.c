#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//����1~100��������ż��֮�͡�

//int main()
//{
//	int i = 2;
//	int sum = 0;
//	while (i <= 100)
//	{
//		if (i % 2 == 0)
//		{
//			sum += i;
//		}
// 
//		i++;
//	}
//	printf("����1~100��������ż��֮��:%d", sum);
//	return 0;
//}
//

//����һ��Сд�ַ����������¹��������Ӧ�ļ����ַ���   
//a->d
//b->e
//����
//w->z
//x->a
//y->b
//z->c

//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch >= 'a' && ch <= 'z')
//	{
//		if (ch + 3 <= 'z')
//		{
//			printf("%c", ch + 3);
//		}
//		else
//			ch = ch + 3 - 26;
//	}
//	else
//		perror("err");
//	return 0;
//}
//

//��Ԫ�ټ����⣺����ÿֻ5Ԫ��ĸ��ÿֻ3Ԫ��
// С��3ֻ1Ԫ,��100Ԫ��100ֻ����������ϡ�

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 0; a < 20; a++)
//	{
//		for (b = 0; b < 34; b++)
//		{
//			c = 100 - a - b;
//			if (a * 5 + b * 3 + c / 3 == 100 && c % 3 == 0)
//			{
//				printf("������%d��ĸ����%d��С����%d\n", a, b, c);
//			}
//		}
//	}
//	return 0;
//}
//

//��д��������һ����д��ĸ�������Ӧͼ��������D
//A
//BB
//CCC
//DDDD

//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch >= 'A' && ch <= 'Z')
//	{
//		for (int i = 0; i <= ch - 'A'; i++)
//		{
//			int j = i;
//			while(j >= 0)
//			{
//				printf("%c", 'A' + i);
//				j--;
//			}
//			printf("\n");
//
//		}
//	}
//	else
//		perror("err");
//	return 0;
//}
//

//����һ���ַ�ͳ��������ĸ�����ָ��Ե�����

//int main()
//{
//	char ch[100];
//	gets(ch);
//	int num = 0;//��ĸ
//	int count = 0;//����
//	int i = 0;
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = ch[i];
//		if (j >= '0' && j <= '9')
//			count++;
//		else if (j >= 'A' && j <= 'z')
//			num++;
//	}
//	printf("��������Ϊ��%d����ĸ����Ϊ��%d", count, num);
//	return 0;
//}
//

//����һ������Ϊ10���������鲢Ϊ����ʼ��10�������������������������Ԫ�ص�ƽ��ֵ��

//int main()
//{
//	int arr[10];
//	int sum = 0;
//	int i = 0;
//	float average = 0;
//	srand((unsigned int)time(NULL));
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = rand();
//		sum += arr[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("����Ϊ��%d\n", arr[i]);
//	}
//	average = sum / 10;
//	
//	printf("�����Ԫ��ƽ��ֵΪ:%f\n", average);
//	return 0;
//}
//

//��һ�������У���дһ���������������������Լ����
// ��һ��������������������С���������������м���������������a��b��
// ��������������������a��b�����Լ������С��������

int t(int a, int b)
{
	while (b != 0)
	{
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}
int i(int a, int b)
{
	return a / t(a, b) * b;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int t1 = t(a, b);//������
	int t2 = i(a, b);//������
	printf("%d", t1);
	printf("%d", t2);
	return 0;
}