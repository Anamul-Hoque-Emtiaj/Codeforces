#include<stdio.h>
#include<string.h>

int main()
{
    char x[100];
    int i,j,l,t;
    gets(x);
    l=strlen(x);
    for(i=0;i<l;i=i+2)
    {
        for(j=i+2;j<l;j=j+2)
        {
            if(x[i]>x[j])
            {
               t=x[i];
               x[i]=x[j];
               x[j]=t;
            }
        }
    }
    printf("%s",x);
    return 0;
}
