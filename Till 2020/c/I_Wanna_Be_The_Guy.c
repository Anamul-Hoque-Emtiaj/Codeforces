#include<stdio.h>
int main()
{
    int n,a,b,i,j,c=1;
    scanf("%d",&n);
    scanf("%d",&a);
    int x[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d",&b);
    int y[b];
    for(j=0;j<b;j++)
    {
        scanf("%d",&y[j]);
    }
        for(i=0,j=0; i<a||j<b;)
    {
        if(x[i]==c&&y[j]!=c)
        {
            c++;
            i++;
        }
        else if(y[j]==c)
        {
            c++;
            j++;
        }
    }
    if(c-1==n)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }
    return 0;
}
