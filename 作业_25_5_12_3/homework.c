#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 20
int main() {
    int monkeys[N];
    int* p;
    int count = 0;  
    int num = 0;    
    for (p = monkeys; p < monkeys + N; p++) {
        *p = p - monkeys + 1;
    }
    p = monkeys;
    while (num < N - 1) 
    {  
        if (*p != 0) 
        {  
            count++;
            if (count % 7 == 0) 
            { 
                *p = 0;  
                num++;
            }
        }
        p++;
        if (p == monkeys + N) {  
            p = monkeys;
        }
    }
    for (p = monkeys; p < monkeys + N; p++) {
        if (*p != 0) {
            printf("大王是%d号猴子\n", *p);
            break;
        }
    }
    return 0;
}