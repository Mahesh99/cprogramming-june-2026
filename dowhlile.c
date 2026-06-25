#include<stdio.h>
void main() {
    int i,n;
    printf("Enter n:");
    scanf("%d",&n);
    i=1;
    do {
        printf("%d ",i);
        i++;
    } while(i<=n);
}