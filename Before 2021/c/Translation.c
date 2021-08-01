#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char t[100];
    scanf("%s",&s);
    scanf("%s",&t);
    strrev(s);
    int d=strcmp(t,s);
    if(d==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
