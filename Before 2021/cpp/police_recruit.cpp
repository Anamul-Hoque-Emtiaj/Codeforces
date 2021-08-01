#include<iostream>
using namespace std;

int main()
{
    long long int n,c0=0,c1=0;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==-1)
        {
            if(c1>0) c1--;
            else c0++;
        }
        else
        {
            c1=c1+a[i];
        }
    }
    cout<<c0<<endl;
}
