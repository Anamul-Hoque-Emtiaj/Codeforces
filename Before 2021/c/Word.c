#include<stdio.h>
#include<string.h>
int main()
{
    char S[100];
    gets(S);
    int i,l,a=0,b=0;
    l=strlen(S);
    for(i=0;i<l;i++)
    {
        if(S[i]>='A'&&S[i]<='Z')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(b>=a) strlwr(S);
    else strupr(S);
    printf("%s",S);
    return 0;

}
