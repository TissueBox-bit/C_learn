#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char input[1000];
    int letters = 0, digits = 0;
    int i = 0;

    printf("������һ���ַ���");
    scanf("%999[^\n]", input);

    while (input[i] != '\0') {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
            letters++;
        }
        else if (input[i] >= '0' && input[i] <= '9') {
            digits++;
        }
        i++;
    }

    printf("Ӣ����ĸ�ĸ���Ϊ��%d\n", letters);
    printf("���ֵĸ���Ϊ��%d\n", digits);
	return 0;
}
