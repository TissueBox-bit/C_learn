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

//�ü�������ķ���Ϊһ��1��3��6�еĶ�ά�����������ݣ�
// �ټ�����е�ƽ�����͸��е�ƽ������

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
//	printf("���������Ϊ��\n");
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 0; j < 6; j++)
//		{
//			sum += arr[i][j];
//		}
//		printf("��%d��ƽ����Ϊ:%d",i+1,sum/6);
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < 6; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 0; j < 3; j++)
//		{
//			sum += arr[j][i];
//		}
//		printf("��%d��ƽ����Ϊ:%d", i+1, sum / 3);
//		printf("\n");
//	}
//	return 0;
//}
//

//����һ���ַ���,  str[10], ���������ĸ�淴����, �������(��ʾ������str��Ч�ַ�����)
//�磺 abcde->edcba

//int main()
//{
//	char str[10];
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		scanf("%c", &str[j]);
//	}
//	printf("������ַ���Ϊ��\n");
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
//	printf("��������ַ���Ϊ��\n");
//	for (j = 0; j < 10; j++)
//	{
//		printf("%c ", str[j]);
//	}
//	printf("\n");
//	len = strlen(str);
//	printf("%d", len);
//	return 0;
//}

//��չ���Ž�

//int main() {
//    // �����ַ����飬����һ��λ�ø� '\0'
//    char str[11];
//    int left, right, len;
//
//    // �����ַ�������� 10 ���ַ����Զ��� '\0'��
//    printf("�������ַ���: ");
//    scanf("%10s", str);
//
//    // ��ȡ��Ч�ַ����ȣ����� '\0'��
//    len = strlen(str);
//    printf("%d\n", len);
//
//    // ˫ָ�뷨����left �ӿ�ͷ��right ��ĩβ
//    for (left = 0, right = len - 1; left < right; left++, right--) {
//        // ���������ַ�
//        char temp = str[left];
//        str[left] = str[right];
//        str[right] = temp;
//    }
//
//    // ����������ַ���
//    printf("������: %s\n", str);
//
//    return 0;
//}

//�����������������������߳��ȣ����ú���fun������ú����ķ���ֵ���Զ��庯��fun��������������������������������������ߣ���
// ���������̱ߺ�С�ڵ������ʱ��fun��������ֵΪ-1�����򷵻����������������ʾ�������������ͨ�����׹�ʽ��⣬��ʽ����:��
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
//����6���ڵ�Ķ�̬��������������

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
//	printf("�����е����ݣ�\n");
//	p = head;
//	while (p != NULL)
//	{
//		printf("ѧ�ţ�%d,�ɼ���%1f\n", p->num, p->score);
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



