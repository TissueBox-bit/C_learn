#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("********************************\n");
	printf("********     1.play       ******\n");
	printf("********     0.exit       ******\n");
	printf("********************************\n");
}

void game()
{
	char mine[ROWS][COLS];//�������Ϣ
	char show[ROWS][COLS];//����Ų�������׵���Ϣ

	//��ʼ������
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show,ROWS, COLS,'*');

	//��ӡ����
	Displayboard(show,ROW,COL);
	
	//������
	setmine(mine, ROW, COL);

	//�Ų���
	Findmine(mine,show,ROW, COL);
}

void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�������������ѡ��");
		}
	}while (input);
}
int main()
{
	text();
	return 0;
}