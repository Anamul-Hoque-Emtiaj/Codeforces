#include<stdio.h>

struct ga
{
    int p,q;
};
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    struct ga x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x[i].p,&x[i].q);
    }
    for(i=0;i<n;i++)
    {
        if(x[i].q-x[i].p>=2)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
