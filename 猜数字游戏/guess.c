#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//函数
//void表示不返回任何值
//创建一个menu函数，随时可以调用
void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");

}

void game()
{
	//生成随机数
	int r = rand() % 100 + 1;//生成1到100随机数（%100就会有0到99，+1就1到100）
	//猜数字
	while (1)
	{
		printf("猜1到100的数字：（请输入）\n");
		int guess;
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("大了\n");
		}
		else if (guess < r)
		{
			printf("小了\n");
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
	//设置随机数起点，否则生成的一直是同一个数
	//放在这里就只需要设置一次
	srand((unsigned int)time(NULL));
	//time是计算机产生为止的时间转换成秒，所以是一串很打的数字
	//所以随机数的种子数庞大就不会导致生成结果的单一性
	do
	{
		//打印菜单
		menu();
		printf("请选择:");
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
			printf("输入错误，请重新输入：\n");
			break;
		}
	} while (input);
	return 0;
}


