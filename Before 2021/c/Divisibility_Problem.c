#include<stdio.h>

struct dp
{
    int a;
    int b;
};

int main()
{
    int t,i,d;
    scanf("%d",&t);
    struct dp x[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&x[i].a,&x[i].b);
    }
    for(i=0;i<t;i++)
    {
        if(x[i].a<x[i].b)
        {
            printf("%d\n",x[i].b-x[i].a);
        }
       else if(x[i].a%x[i].b==0)
        {
            printf("0\n");
        }
        else
        {
            d=x[i].a/x[i].b;
            printf("%d\n",(d+1)*x[i].b-x[i].a);
        }
    }
    return 0;
}
