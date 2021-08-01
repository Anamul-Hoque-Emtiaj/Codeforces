#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,mx=0,mn=1000000000,m1,m2,c1=0,c2=0;
    cin>>n;
    long long b[n];
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        m1=b[i];
        if(m1<mn) mn=m1;
        if(m1>mx) mx=m1;
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==mx) c1++;
        else if(b[i]==mn) c2++;
    }
    if(mx==mn) cout<<"0 "<<(n/2)*(n/2)<<endl;
    else  cout<<mx-mn<<" "<<c1*c2<<endl;
}
