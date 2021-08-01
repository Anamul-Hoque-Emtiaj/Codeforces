#include<stdio.h>

struct tm
{
    int a,b,c;
};

int main()
{
    int n,i,l=0;
    scanf("%d",&n);
    struct tm x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x[i].a,&x[i].b,&x[i].c);
    }
    for(i=0;i<n;i++)
    {
        if(x[i].a+x[i].b+x[i].c>=2)
        {
            l++;
        }
    }
    printf("%d",l);
    return 0;
}
