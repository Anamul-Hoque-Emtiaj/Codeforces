#include<stdio.h>
#include<string.h>

struct array
{
    char w[103];
};
int main()
{
    int n,i,l;
    scanf("%d",&n);
    struct array a[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i].w);
    }
    for(i=0;i<n;i++)
    {
        l=strlen(a[i].w);
        if(l<=10)
        {
            printf("%s\n",a[i].w);
        }
        else
        {
            int j;
            char x[103];
            for(j=0;j<l;j++)
            {
                x[j]=a[i].w[j];
            }
            printf("%c%d%c\n",x[0],l-2,x[l-1]);
        }
    }
    return 0;

}
