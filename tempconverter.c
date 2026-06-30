#include<stdio.h>
void main() {
    float f,c;
    printf("Enter temp in celcius:");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("Temperature in fahrenheit is %f",f);
}