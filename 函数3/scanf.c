#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int score;
	printf("������ɼ���");
	scanf("%d", &score);//�������
	//scanf������ռλ���ĺ���Ĳ�����Ҫ���ǵ�ַ
	//& ȡ��ַ���ţ�&score...ȡ��score�ĵ�ַ
	printf("�ɼ��ǣ�%d\n", score);
	return 0;
}