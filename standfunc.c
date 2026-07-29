#include<stdio.h>                  
#include<math.h>                   
#include<stdlib.h>
#include<time.h>
void main() {                      
    // double d=12.111121312123232;
    int a=-3;
    // int r=rand();
    srand(time(NULL));

    printf("%d ",time(NULL));   
    printf("%d ",rand());   
    printf("%d ",rand());   
    printf("%d ",rand());   
    printf("%d ",rand());   
    printf("%d ",abs(a));   
    printf("%lf ",round(-1.5f));   
    printf("%lf ",round(1.5));     
}                                   