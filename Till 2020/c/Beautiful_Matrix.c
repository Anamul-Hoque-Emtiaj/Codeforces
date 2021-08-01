#include<stdio.h>
#include<math.h>
int main()
{
    int a[5][5];
    int i,j,s1,s2;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]!=0)
            {
                s1=abs(i-2);
                s2=abs(j-2);

            }
        }
    }
    printf("%d",s1+s2);
}
