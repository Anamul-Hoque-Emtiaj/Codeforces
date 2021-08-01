#include<stdio.h>
#include<math.h>
int main()
{
    double n;
    int a,b,x;
    scanf("%d %d",&a,&b);
    if(b*2==a*3)x=1;
    else
    {n=(log(b)-log(a))/(log(3)-log(2));
    x=(int)n;
    }
    printf("%d",x+1);
    return 0;
}
