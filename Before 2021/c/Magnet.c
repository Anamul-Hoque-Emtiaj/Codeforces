#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=1,m;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]!=m)
        {
            m=a[i];
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
