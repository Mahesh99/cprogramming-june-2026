#include<stdio.h>
void main() {
    // int battery=100;
    // if(battery<=20) {
    //     printf("Battery is low. Please connect charger");
    // }
    

    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    if(n%2==0) {
        printf("Even");
    } else {
        printf("Odd");
    }
    
}
/*
4%2 ->
0
5 -> 1
6 - 0
7 - 1

*/