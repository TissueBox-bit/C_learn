#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void Spaces(char* str) {
    char* src, * dst;
    for (src = dst = str; *src != '\0'; src++) {
        if (*src != ' ') {
            *dst++ = *src;
        }
    }
    *dst = '\0';
}
int main() {
    char str[100];
    printf("请输入一个带空格的字符串: ");
    fgets(str, sizeof(str), stdin);
    strcspn(str, "\n");
    Spaces(str);
    printf("删除空格后的字符串: %s\n", str);
    return 0;
}