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
    printf("请输入一个带空格的字符串: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    Spaces(str);
    printf("删除空格后的字符串: %s\n", str);

    return 0;
}