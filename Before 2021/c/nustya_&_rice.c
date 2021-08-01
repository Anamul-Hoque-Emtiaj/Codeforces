#include<stdio.h>
struct nr
{
    int n,a,b,c,d;
};
int main()
{
    int t,i;
    scanf("%d",&t);
    struct nr x[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d %d",&x[i].n,&x[i].a,&x[i].b,&x[i].c,&x[i].d);
    }
    for(i=0;i<t;i++)
    {
        if(((x[i].a-x[i].b)*x[i].n<=(x[i].c+x[i].d))&&((x[i].a+x[i].b)*x[i].n>=(x[i].c-x[i].d)))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
