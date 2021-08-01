#include<stdio.h>
int main()
{
    int n,h,i,c=0,t,x;
    scanf("%d %d",&n,&h);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>h)
           {
               c++;
           }
    }
    x=n-c;
    t=x+2*c;
    printf("%d",t);
    return 0;
}
