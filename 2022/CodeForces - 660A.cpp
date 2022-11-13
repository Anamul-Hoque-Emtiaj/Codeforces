#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int c=0;
    vector<ll> v;
    v.push_back(arr[0]);
    for(int i=1; i<n;i++)
    {
        if(__gcd(arr[i],arr[i-1])!=1)
        {
            v.push_back(1);
            v.push_back(arr[i]);
            c++;
        }
        else
            v.push_back(arr[i]);
    }
    cout<<c<<"\n";
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<"\n";
}


