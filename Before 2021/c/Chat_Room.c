#include<stdio.h>
#include<string.h>
int main()
{
    char S[100];
    char x[5]="hello";
    gets(S);
    int l,i,a=0,c=0;
    l=strlen(S);
    for(i=0;i<l;i++)
    {
        if(S[i]==x[a])
        {
            a++;
            c++;
        }
    }
    if(c>=5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

