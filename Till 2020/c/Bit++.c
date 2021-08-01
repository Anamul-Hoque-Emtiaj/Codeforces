#include<stdio.h>
struct bit
{
    char a[3];
};
int main()
{
    int n,i,j,x=0;
    scanf("%d",&n);
    struct bit b[n];
    for(i=0;i<n;i++)
    {
       scanf("%s",&b[i].a);
    }
    for(i=0;i<n;i++)
    {

        if(b[i].a[0]=='+'||b[i].a[2]=='+') x++;
        else if(b[i].a[0]=='-'||b[i].a[2]=='-') x--;

    }
    printf("%d",x);
    return 0;

}
