#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            if(i==n)
            {
                printf("I love it");
            }
            else
            {
                printf("I love that ");
            }
        }
        else
            if(i==n)
            {
                printf("I hate it");
            }
            else
            {
                printf("I hate that ");
            }
    }
    return 0;
}
