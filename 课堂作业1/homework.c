#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10];
    int sum = 0;
    double average;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; i++) {
        arr[i] = rand();
        sum += arr[i];
    }
    average = (double)sum / 10;
    printf("数组元素平均值为: %lf\n", average);
    return 0;
}