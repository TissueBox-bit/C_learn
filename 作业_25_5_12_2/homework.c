#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void Spaces(char* str) {
    char* src = str;
    char* dst = str;
    while (*src != '\0') {
        if (*src != ' ') {
            *dst = *src;
            dst++;
        }
        src++;
    }
    *dst = '\0';
}
int main() {
    char str[100];
    printf("������һ�����ո���ַ���: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    Spaces(str);
    printf("ɾ���ո����ַ���: %s\n", str);

    return 0;
}