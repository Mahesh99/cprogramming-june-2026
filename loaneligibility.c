#include<stdio.h>
void main() {
    int age,salary;
    printf("Enter age n salary:");
    scanf("%d%d",&age,&salary);
    printf("0-False, 1-True\n");
    printf("Loan status:%d",age>=18 && salary >= 20000);
}