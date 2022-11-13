#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    while(m--)
    {
        ll t;
        cin>>t;
        cout<<upper_bound(arr,arr+n,t)-arr<<endl;
    }
}



