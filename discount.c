#include<stdio.h>
void main() {
    float price,disc,fp;
    printf("Enter product price:");
    scanf("%f",&price);
    printf("Enter discount:");
    scanf("%f",&disc);
    fp=price-price*disc/100;
    printf("The final price is %.2f",fp);
}