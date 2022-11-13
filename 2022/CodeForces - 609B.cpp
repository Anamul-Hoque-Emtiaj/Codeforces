#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m+1];
    for(int i=0; i<=m; i++)
    {
        arr[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        int t;
        cin>>t;
        arr[t]++;
    }
    ll r=0;
    for(int i=0; i<=m; i++)
    {
        r+=(arr[i]*(n-arr[i]));
    }
    cout<<r/2<<endl;
}




