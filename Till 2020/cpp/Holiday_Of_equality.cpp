#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    long long int a[n],t,s=0;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        s=s+a[n-1]-a[i];
    }
    cout<<s;
}
