#include<stdio.h>

struct trm
{
    int a,b;
};
int main()
{
    int n,i,j,s=0,max;
    scanf("%d",&n);
    int y[n];
    struct trm x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x[i].a,&x[i].b);
    }
    for(i=0,j=0;i<n;i++,j++)
    {
        s=s+(x[i].b-x[i].a);
        y[j]=s;
    }
    max=y[0];
    for(j=0;j<n;j++)
    {
        if(y[j]>max)
            max=y[j];
    }
    printf("%d",max);
    return 0;
}
