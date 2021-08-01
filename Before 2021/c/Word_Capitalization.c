#include<stdio.h>
int main()
{
    char w[1000];
    gets(w);
    if(w[0]>='a'&&w[0]<='z')
    {
        w[0]='A'+w[0]-'a';
    }
    printf("%s",w);
}
