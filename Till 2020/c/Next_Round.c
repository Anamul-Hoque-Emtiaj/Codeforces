#include<stdio.h>
int main()
{
    int n,k,i,m,s=0;
    scanf("%d %d",&n,&k);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    m=x[k-1];
    for(i=0;i<n;i++)
    {
        if(x[i]>=m&&m!=0)
        {
            s++;
        }

        else if(m==0&&x[i]>m)
        {
            s++;
        }

    }
    printf("%d",s);
    return 0;
}
