#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    char str[30] = "Grade2024 Class2351";
    int letterCount = 0, digitCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            letterCount++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digitCount++;
        }
    }
    printf("��ĸ�ַ�����Ϊ: %d\n", letterCount);
    printf("�����ַ�����Ϊ: %d\n", digitCount);
    return 0;
}