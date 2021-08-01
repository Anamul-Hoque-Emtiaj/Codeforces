#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],x[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        x[a[i]-1]=i+1;
    }
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
}
