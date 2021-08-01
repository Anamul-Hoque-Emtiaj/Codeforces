#include<stdio.h>
#include<math.h>

int main()
{
    long long t,x,y,a,b,i,j,k,c,d;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld%lld%lld%lld",&x,&y,&a,&b);

        if(x<y)
        {
            c=y-x;
            if(2*a>=b)
            k=(x*b)+c*a;
            else
                k=x*a+y*a;
        }
        else if(y<x)
        {
            c=x-y;
            if(2*a>=b)
            k=y*b+c*a;
            else
                k=y*a+x*a;
        }
        else
        {
            if(2*a>=b)
            {
                k=x*b;
            }
            else
                k=x*a+y*a;
        }printf("%lld\n",k);

    }


}
