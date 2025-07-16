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
	char mine[ROWS][COLS];//存放雷信息
	char show[ROWS][COLS];//存放排查出来的雷的信息

	//初始化棋盘
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show,ROWS, COLS,'*');

	//打印棋盘
	Displayboard(show,ROW,COL);
	
	//布置雷
	setmine(mine, ROW, COL);

	//排查雷
	Findmine(mine,show,ROW, COL);
}

void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择");
		}
	}while (input);
}
int main()
{
	text();
	return 0;
}