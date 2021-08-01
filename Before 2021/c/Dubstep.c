#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    char a[3]="WUB";
    gets(s);
    int l,i,x=0;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!='W'&&s[i+1]!='U'&&s[i+2]!='B')
        {
            printf("%c",s[i]);
        }
    }
}
