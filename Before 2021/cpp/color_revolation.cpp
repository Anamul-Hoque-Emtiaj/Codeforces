#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,n1,n2,n3,n4;
        cin>>n>>k;
        n1=n/(1+k+k*k+k*k*k);
        n2=k*n1;
        n3=k*k*n1;
        n4=k*k*k*n1;
        cout<<n1<<' '<<n2<<' '<<n3<<' '<<n4<<endl;
    }
}

