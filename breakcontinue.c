#include<stdio.h>
void main() {
    int i,n,prime=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=2;i<n;i++) {
        if(n%i==0) {
            prime=0;
            break;
        }
    }
    if(prime==0) {
        printf("Not prime");
    } else {
        printf("Prime");
    }
}
/*
a number is divided by 1 and itself only then it is called prime number


*/

// #include<stdio.h>
// void main() {

//     int i,n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++) {
//         if(i%2==0) {
//             continue;
//         }
//         printf("%d ",i);
//     }
// }
// //continue skips to the next iteration of the loop