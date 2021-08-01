#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,t,i,j;
    cin>>n>>t;
    char a[n],temp;
    scanf("%s",a);
    for(i=0;i<t;i++)
    {
        for(j=0;j<n;)
        {
            if(a[j]=='B'&&a[j+1]=='G')
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                j=j+2;
            }
            else j++;
        }
    }
    printf("%s",a);

}
