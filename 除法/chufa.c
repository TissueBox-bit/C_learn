#include<stdio.h>
int main()
{
	float x = 6 / 4;
	int y = 6 / 4;
	printf("%f\n", x); // 输出 1.000000
	printf("%d\n", y); // 输出 1
	//原因是只进行了整数部分的运算，想要得到小数其中一个数写成小数即可
	float a = 6.0 / 4; // 或者写成 6 / 4.0
	printf("%f\n", a); // 输出 1.500000
	int score = 5;
	score = (score / 20) * 100;
	//你可能觉得经过运算， score 会等于 25 ，但是实际上 score 等于 0 。
	// 这是因为score / 20 是整除，会得到⼀个整数值 0 ，所以乘以 100 后得到的也是 0 。
	//为了得到预想的结果，可以将除数 20 改成 20.0 ，让整除变成浮点数除法
	int scores = 5;
	score = (scores / 20.0) * 100;
	return 0;
}