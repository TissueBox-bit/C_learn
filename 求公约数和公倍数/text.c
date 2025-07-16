#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 求两个整数的最大公约数
//用的是辗转相除法
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
// 求两个整数的最小公倍数
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int a, b;
    printf("请输入两个整数: ");
    scanf("%d %d", &a, &b);
    int gcd_1 = gcd(a, b);
    int lcm_1 = lcm(a, b);
    printf("最大公约数是: %d\n", gcd_1);
    printf("最小公倍数是: %d\n", lcm_1);
    return 0;
}