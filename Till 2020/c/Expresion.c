#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,l,m,n;
    scanf("%d%d%d",&a,&b,&c);
    i=a+b+c;
    m=a*(b+c);
    n=(a+b)*c;
    l=a*b*c;
    if(i>l&&i>m&&i>n)
    {
        printf("%d",i);
    }

    else if(l>i&&l>m&&l>n)
    {
        printf("%d",l);
    }
    else if(m>l&&m>i&&m>n)
    {
        printf("%d",m);
    }
    else
    {
        printf("%d",n);
    }
    return 0;
}
