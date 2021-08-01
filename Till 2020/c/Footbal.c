#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    gets(x);
    int i,p;
    int l=strlen(x);
    for(i=0;i<l;i++)
    {
        if((x[i]=='0'&&x[i+1]=='0'&&x[i+2]=='0'&&x[i+3]=='0'&&x[i+4]=='0'&&x[i+5]=='0'&&x[i+6]=='0')||
           (x[i]=='1'&&x[i+1]=='1'&&x[i+2]=='1'&&x[i+3]=='1'&&x[i+4]=='1'&&x[i+5]=='1'&&x[i+6]=='1'))

        {
            p=1;
        }
    }
    if(p==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
