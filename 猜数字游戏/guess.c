#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//����
//void��ʾ�������κ�ֵ
//����һ��menu��������ʱ���Ե���
void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");

}

void game()
{
	//���������
	int r = rand() % 100 + 1;//����1��100�������%100�ͻ���0��99��+1��1��100��
	//������
	while (1)
	{
		printf("��1��100�����֣��������룩\n");
		int guess;
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("����\n");
		}
		else if (guess < r)
		{
			printf("С��\n");
		}
		else
		{
			printf("excellent!\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	//�����������㣬�������ɵ�һֱ��ͬһ����
	//���������ֻ��Ҫ����һ��
	srand((unsigned int)time(NULL));
	//time�Ǽ��������Ϊֹ��ʱ��ת�����룬������һ���ܴ������
	//������������������Ӵ�Ͳ��ᵼ�����ɽ���ĵ�һ��
	do
	{
		//��ӡ�˵�
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룺\n");
			break;
		}
	} while (input);
	return 0;
}


