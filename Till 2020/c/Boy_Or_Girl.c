#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    gets(x);
    int i,j,t,p=0,s;
    int l=strlen(x);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(x[i]>x[j])
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        if(x[i]==x[i+1])
            p++;
    }
    s=l-p;
    if(s%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
