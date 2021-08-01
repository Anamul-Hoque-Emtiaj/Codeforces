#include<stdio.h>
int main()
{
    int k,n,w,s;
    scanf("%d %d %d",&k,&n,&w);
    s=(w*(w+1)/2)*k;
    if(n>s)
    {
        printf("0");
    }
    else
    {
        printf("%d",s-n);
    }
    return 0;
}
