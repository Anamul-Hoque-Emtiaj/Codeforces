#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll x = (sqrt(1+8*n)-1)/2;
    ll t = x*(x+1);
    t = t/2;
    if(t==n)
        cout<<x<<endl;
    else
        cout<<n-t<<endl;
}



