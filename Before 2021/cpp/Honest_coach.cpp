#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n,m=1001,d,t;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            d=abs(a[i]-a[i+1]);
            if(d<m) m=d;
        }
        cout<<m<<endl;
    }
}

