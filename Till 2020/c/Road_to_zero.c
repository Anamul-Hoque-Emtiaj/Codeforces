#include<stdio.h>
#include<math.h>
struct pb
{
    long long int x,y,a,b;
};
int main()
{
    int t,i;
    long long int e,x,y;
    scanf("%d",&t);
    struct pb r[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&r[i].x,&r[i].y);
        scanf("%lld %lld",&r[i].a,&r[i].b);
    }
    for(i=0;i<t;i++)
    {
        if(r[i].x<0&&r[i].y<0)
        {
            if(r[i].x>r[i].y)
            {
                e=(-1*r[i].b*r[i].x)+(-1*r[i].a*(r[i].y-r[i].x));
                printf("%lld\n",e);
            }
            else if(r[i].x==r[i].y)
            {
                e=-1*r[i].b*r[i].x;
                printf("%lld\n",e);
            }
            else
            {
                e=(-1*r[i].b*r[i].y)+(-1*r[i].a*(r[i].x-r[i].y));
                printf("%lld\n",e);
            }
        }
        else if(r[i].x>0&&r[i].y>0)
        {
            if(r[i].x>r[i].y)
            {
                e=(r[i].b*r[i].y)+(r[i].a*(r[i].x-r[i].y));
                printf("%lld\n",e);
            }
            else if(r[i].x==r[i].y)
            {
                e=r[i].b*r[i].x;
                printf("%lld\n",e);
            }
            else
            {
                e=(r[i].b*r[i].x)+(r[i].a*(r[i].y-r[i].x));
                printf("%lld\n",e);
            }
        }
        else if(r[i].x==0&&r[i].y==0) printf("0\n");
        else
        {
            if(r[i].x!=0&&r[i].y!=0)
            {
            x=abs(r[i].x);
            y=abs(r[i].y);
            e=(x+y)*r[i].a;
            printf("%lld\n",e);
            }
           else if(r[i].x==0)
            {
                e=abs(r[i].y)*r[i].a;
                printf("%lld\n",e);
            }
            else if(r[i].y==0)
            {
                e=abs(r[i].x)*r[i].a;
                printf("%lld\n",e);
            }
        }
    }
    return 0;
}
