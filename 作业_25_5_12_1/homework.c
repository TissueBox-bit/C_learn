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
    printf("������һ�����ո���ַ���: ");
    fgets(str, sizeof(str), stdin);
    strcspn(str, "\n");
    Spaces(str);
    printf("ɾ���ո����ַ���: %s\n", str);
    return 0;
}