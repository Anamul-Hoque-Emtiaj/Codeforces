#include<stdio.h>
int main()
{
    int n,i,l=0;
    scanf("%d",&n);
    char x[n];
    scanf("%s",x);
    for(i=0;i<n;i++)
    {
        if(x[i]==x[i+1])
        {
            l++;
        }
    }
    printf("%d",l);
    return 0;
}
