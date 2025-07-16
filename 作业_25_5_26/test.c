#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct Student {
    int num;
    float score;
    struct Student* next;
};

int main() {
    struct Student a, b, c, d, e, * head, * p;
    a.num = 10101;
    a.score = 89.5;
    b.num = 10103;
    b.score = 90;
    c.num = 10105;
    c.score = 88;
    d.num = 10107;
    d.score = 92;
    e.num = 10109;
    e.score = 87;
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;
    p = head;
    do {
        printf("%ld %5.1f\n", p->num, p->score);
        p = p->next;
    } while (p != NULL);
    return 0;
}