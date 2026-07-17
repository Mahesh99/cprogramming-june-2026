#include<stdio.h>
void main()
{
    //declaration and intialisation
    // int a[5];
    int a[5]={11,2,3,4,5};
    
    int i;
    // int a[] = {1,2,3,4};
    // int a[5]={1,2,3};
    // int a[5]={0};

    //accessing
    printf("%d ",a[0]); //11
    printf("%d ",a[4]); //5
    //index
    //0,1,2...n-1, where n is the size of the array

    //modifying
    a[4]=10;
    printf("%d ",a[4]);

    printf("\n");
    for(i=0;i<5;i++) 
        printf("%d ",a[i]);

}
//1. create a character array of size 5 and initialize with any alphabets and print 3rd character
//2. create a float array of size 5 and read 5 decimal numbers using scanf and print all the elements using for loop