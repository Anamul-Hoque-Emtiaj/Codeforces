#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i,l;
    gets(a);
    strlwr(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='y')
        {
            printf(".%c",a[i]);
        }
    }
    return 0;
}
