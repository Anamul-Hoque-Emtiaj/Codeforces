#include<stdio.h>
int main()
{
    int n,i,a=0,b=0,c=0,d=0,t,e,g,h;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        if(s[i]==1)a++;
        else if(s[i]==2)b++;
        else if(s[i]==3)c++;
        else d++;
    }
    if(c>=a)
    {
        if(b%2==0)
        {
            t=d+c+(b/2);
        }
        else
        {
            t=d+c+(b/2+1);
        }
    }
    else
    {
        e=a-c;
        if(b%2==0)
        {
            if(e%4==0)g=e/4;
            else g=(e/4)+1;
            t=d+c+(b/2)+g;
        }
        else
        {
            if(e>=2)
            {
                g=e-2;
                if(g%4==0)h=g/4;
                else h=(g/4)+1;
                t=d+c+(b/2)+1+h;
            }
            else
            {
                t=d+c+b/2+1;
            }


        }
    }
    printf("%d",t);
    return 0;
}
