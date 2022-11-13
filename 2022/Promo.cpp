#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll arr2[n+1];
    arr2[0] = arr[n-1];
    for(int i=1; i<n; i++)
    {
        arr2[i] =arr2[i-1]+arr[n-1-i];
    }
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
            cout<<arr2[x-1]<<endl;
        else
            cout<<arr2[x-1]-arr2[x-y-1]<<endl;
    }
}
