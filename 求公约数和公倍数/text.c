#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// ���������������Լ��
//�õ���շת�����
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
// ��������������С������
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int a, b;
    printf("��������������: ");
    scanf("%d %d", &a, &b);
    int gcd_1 = gcd(a, b);
    int lcm_1 = lcm(a, b);
    printf("���Լ����: %d\n", gcd_1);
    printf("��С��������: %d\n", lcm_1);
    return 0;
}