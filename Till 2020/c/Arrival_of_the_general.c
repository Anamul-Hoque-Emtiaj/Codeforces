#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,s[n],max,min;
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    max=0;
    min=0;
    for(i=0;i<n;i++)
    {
        if(s[i]>s[max])
        {
            max=i;
        }
        if(s[i]<=s[min])
        {
            min=i;
        }
    }
    if(min<max)
    {
        printf("%d",max+n-2-min);
    }
    else
    {
        printf("%d",max+n-1-min);
    }
    return 0;
}
