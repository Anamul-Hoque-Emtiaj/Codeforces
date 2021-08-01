#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int p[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        s+=p[i];
    }
    printf("%.12f",(double)s/n);
    return 0;
}
