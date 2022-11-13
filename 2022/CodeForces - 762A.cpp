#include<bits/stdc++.h>
#define ll unsigned long long int

using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    for(int i=1; i<sqrt(n); i++)
    {
        if(n%i==0)
            v.push_back(i);
    }
    for(int i=sqrt(n); i>=1; i--)
    {
        if(n%i==0)
            v.push_back(n/i);
    }
    if(k>v.size())
        cout<<"-1\n";
    else
        cout<<v[k-1]<<endl;
}



