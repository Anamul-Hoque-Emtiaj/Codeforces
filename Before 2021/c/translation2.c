#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t[100];
    gets(s);
    gets(t);
    int ls,lt,i,j,c=0;
    ls=strlen(s);
    lt=strlen(t);
    for(i=0,j=lt-1;i<ls;i++,j--)
    {
        if(s[i]==t[j]) c++;
    }
    if(lt==c)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
