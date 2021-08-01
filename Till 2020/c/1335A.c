#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int x[t],i,n;
    for(i=0;i<t;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<t;i++)
    {
        n=x[i];
        if(n%2==0)
        {
            printf("%d\n",(n/2)-1);
        }
        else
        {
            printf("%d\n",(n-1)/2);
        }
    }
    return 0;
}
