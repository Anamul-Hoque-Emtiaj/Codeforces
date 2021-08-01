#include<stdio.h>
#include<math.h>

struct dpo
{
    int n;
    int k;
};

int main()
{
    int t,i;
    scanf("%d",&t);
    struct dpo a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a[i].n,&a[i].k);

    }
    for(i=0;i<t;i++)
    {
        if((a[i].n%2==0&&a[i].k%2==0&&a[i].k<=sqrt(a[i].n))||(a[i].n%2!=0&&a[i].k%2!=0&&a[i].k<=sqrt(a[i].n)))
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
