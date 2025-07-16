#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char input[1000];
    int letters = 0, digits = 0;
    int i = 0;

    printf("请输入一行字符：");
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

    printf("英文字母的个数为：%d\n", letters);
    printf("数字的个数为：%d\n", digits);
	return 0;
}
