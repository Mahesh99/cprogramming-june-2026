#include<string.h>
#include<stdio.h>
void main() {
    char s[20];
    char *p;
    // p=s;
    p="hello";
    // scanf(" %s",s);
    gets(s);
    s[0]='a';
    printf("%s\n",s);
    printf("%-20.3s",s);
    printf("hi\n");
    puts(p);
    printf("\n%d",strlen(s));
}
          