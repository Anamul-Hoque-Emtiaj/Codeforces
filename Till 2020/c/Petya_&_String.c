#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    strlwr(a);
    strlwr(b);
    int d=strcmp(a,b);
    printf("%d",d);
    return 0;
}
