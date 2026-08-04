#include<stdio.h>
void main() {
    char *days[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    // puts(days[0]);
    int d=17;
    int dn=4;
    int n=27;
    int k=d%7;//3
    int j=n%7;//6
    int fin_i=(j-(k-dn))%7;
    printf("%d",fin_i);
    puts(days[fin_i]);

}
//17