#include<stdio.h>
void main() {
    int a[]={10,20,30,40,50,60};
    int *p,*q;
    int k=10,i;
    printf("%d",a);//a[0]
    p=a;
    printf(" %d",*(p+1));
    printf(" %d",*(p+3));
    p=p+5;
    q=a;
    printf(" %d",*(p-3));
    printf("\n %d",p>q);
    printf("\n %d",p-q);
    
    printf("\n");

    for(i=0;i<6;i++)
        printf("%d ",a[i]);
    
    printf("\n");
    
    for(i=0;i<6;i++)
        // printf("%d ",*(q+i));
        printf("%d ",*(a+i));
    
    
}