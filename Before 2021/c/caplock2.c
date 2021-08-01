#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    gets(s);
    int l,i,c=0;
    l=strlen(s);
    for(i=1;i<l;i++)
    {
        if(s[i]>='A'&&s[i]<='Z'){c++;}
    }
    if(c==l-1)
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
