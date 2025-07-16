#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 0 && n <= 100)
//	{
//		if (n >= 90)
//			printf("excellent\n");
//		else if (n >= 75 && n <= 89)
//			printf("average\n");
//		else if (n >= 60 && n <= 74)
//			printf("passed\n");
//		else
//			printf("failed\n");
//	}
//	else
//		printf("err");
//	return 0;
//}
//

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 0 && n <= 100)
//	{
//		switch (n / 5)
//		{
//		case 20:
//		case 19:
//		case 18:
//			printf("excellent\n");
//			break;
//		case 17:
//		case 16:
//		case 15:
//			printf("average\n");
//			break;
//		case 14:
//		case 13:
//		case 12:
//			printf("passed\n");
//			break;
//		default:
//			printf("failed\n");
//			break;
//
//		}
//	}
//	else
//		printf("err");
//	return 0;
//}
//

//用键盘输入的方法为一个1个3行6列的二维数组输入数据，
// 再计算各行的平均数和各列的平均数。

//int main()
//{
//	int arr[3][6];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	printf("输入的数组为：\n");
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//行
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 0; j < 6; j++)
//		{
//			sum += arr[i][j];
//		}
//		printf("第%d行平均数为:%d",i+1,sum/6);
//		printf("\n");
//	}
//	//列
//	for (i = 0; i < 6; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 0; j < 3; j++)
//		{
//			sum += arr[j][i];
//		}
//		printf("第%d列平均数为:%d", i+1, sum / 3);
//		printf("\n");
//	}
//	return 0;
//}
//

//输入一个字符串,  str[10], 将里面的字母逆反排列, 再输出。(提示，先求str有效字符个数)
//如： abcde->edcba

//int main()
//{
//	char str[10];
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		scanf("%c", &str[j]);
//	}
//	printf("输入的字符串为：\n");
//	for (j = 0; j < 10; j++)
//	{
//		printf("%c ", str[j]);
//	}
//	printf("\n");
//	int len = strlen(str);
//	printf("%d\n", len);
//	int left = 0;
//	int right = 9;
//	for (; left <= right; left++, right--)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//	}
//	printf("交换后的字符串为：\n");
//	for (j = 0; j < 10; j++)
//	{
//		printf("%c ", str[j]);
//	}
//	printf("\n");
//	len = strlen(str);
//	printf("%d", len);
//	return 0;
//}

//拓展最优解

//int main() {
//    // 定义字符数组，多留一个位置给 '\0'
//    char str[11];
//    int left, right, len;
//
//    // 输入字符串（最多 10 个字符，自动补 '\0'）
//    printf("请输入字符串: ");
//    scanf("%10s", str);
//
//    // 获取有效字符长度（不含 '\0'）
//    len = strlen(str);
//    printf("%d\n", len);
//
//    // 双指针法逆序：left 从开头，right 从末尾
//    for (left = 0, right = len - 1; left < right; left++, right--) {
//        // 交换左右字符
//        char temp = str[left];
//        str[left] = str[right];
//        str[right] = temp;
//    }
//
//    // 输出逆序后的字符串
//    printf("逆序结果: %s\n", str);
//
//    return 0;
//}

//主函数中输入三角形三条边长度，调用函数fun，输出该函数的返回值。自定义函数fun用于求三角形面积，有三个参数（代表三条边），
// 当三边两短边和小于等于最长边时，fun函数返回值为-1，否则返回三角形面积。（提示，三角形面积可通过海伦公式求解，公式如下:）
//s=sqrt(p * (p - a) * (p - b) * (p - c)),p = (a + b + c) / 2


//int MAX(int a, int b, int c)
//{
//	int t = (a > b) ? a : b;
//	return (t > c) ? t : c;
//}
//float fun(int a, int b, int c)
//{
//	if (MAX(a, b, c) > a + b + c - MAX(a, b, c))
//	{
//		return -1;
//	}
//	else
//	{
//		int p = (a + b + c) / 2;
//		float sum = p * (p - a) * (p - b) * (p - c);
//		float s = sqrt(sum);
//		return s;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	float s = fun(a, b, c);
//	if (s == -1)
//		perror("err");
//	else
//		printf("%.2f", s);
//	return 0;
//}
//


//???
//创建6个节点的动态链表并遍历该链表。

//struct s
//{
//	int num;
//	float score;
//	struct s* next;
//};
//int main()
//{
//	struct s* head = NULL;
//	struct s* p = NULL;
//	struct s* temp = NULL;
//	for (int i = 0; i < 6; i++)
//	{
//		temp = (struct s*)malloc(sizeof(struct s*));
//		if (temp == NULL)
//		{
//			perror("malloc err");
//			return 1;
//		}
//		temp->num = i;
//		temp->score = i * 88.8;
//		temp->next = NULL;
//		if (head == NULL)
//		{
//			head = temp;
//		}
//		else
//			p->next = temp;
//		p = temp;
//		
//	}
//	printf("链表中的数据：\n");
//	p = head;
//	while (p != NULL)
//	{
//		printf("学号：%d,成绩：%1f\n", p->num, p->score);
//		p = p->next;
//	}
//	p = head;
//	while (p != NULL)
//	{
//		temp = p->next;
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}



