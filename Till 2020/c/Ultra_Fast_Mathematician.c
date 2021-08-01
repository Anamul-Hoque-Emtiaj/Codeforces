#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int l1,l2,i;
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<l1&&i<l2;i++)
    {
        if(a[i]!=b[i]) printf("1");
        else printf("0");
    }
    return 0;
}
