#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {
    srand(time(NULL));
    int r=rand()%10+1,g;
    printf("Guess the number:");
    scanf("%d",&g);
    if(g==r) {
        printf("You guessed right");
    } else {
        printf("You guessed wrong! Better luck next time.\nThe number is %d",r);
    }
}