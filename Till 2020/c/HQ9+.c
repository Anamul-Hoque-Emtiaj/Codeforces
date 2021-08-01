#include<stdio.h>
#include<string.h>

int main()
{
    char w[100];
    gets(w);
    int i,l,s=0;
    l=strlen(w);
    for(i=0;i<l;i++)
    {
        if(w[i]=='H'||w[i]=='Q'||w[i]=='9')
        {
            s++;
            break;
        }
    }
    if(s==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}

