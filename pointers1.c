#include<stdio.h>
void main() {
    int a=10;
    int *p;
    p=&a;
    *p=20;
    printf("%u",&a);
    printf(" %d",a);
    printf(" %d",*p);
}