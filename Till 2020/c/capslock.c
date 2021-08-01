#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],c[100];
    gets(s);
    strcpy(c,s);
    strupr(c);
    int d,l,i,x=0,y=0;
    d=strcmp(s,c);
    l=strlen(s);
    if(s[0]>='a'&&s[0]<='z') y=1;
    for(i=1;i<l;i++)
    {
        if(s[i]>='A'&&s[i]<='Z') x++;
    }
    if(y==1&&x==l-1||d==0)
    {
        for(i=0;i<l;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]='a'+s[i]-'A';
            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                s[i]='A'+s[i]-'a';
            }

        }
        printf("%s",s);
    }
    else
    {
        printf("%s",s);
    }
    return 0;
}
