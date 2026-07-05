#include<stdio.h>
void main() {
    int a,b,op,result;
    while(1) {
        printf("\nEnter two numbers:");
        scanf("%d %d",&a,&b);
        printf("Enter operation:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Exit\n");
        scanf("%d",&op);
        switch(op) {
            case 1:
                result=a+b;
                printf("Result is %d",result);
                break;
            case 2:
                result=a-b;
                printf("Result is %d",result);
                break;
            case 3:
                result=a*b;
                printf("Result is %d",result);
                break;
            case 4:
                result=a/b;
                printf("Result is %d",result);
                break;
            case 5:
                result=a%b;
                printf("Result is %d",result);
                break;
            case 6:
                return;
            default:
                printf("Invalid operation");
        }
    }
}