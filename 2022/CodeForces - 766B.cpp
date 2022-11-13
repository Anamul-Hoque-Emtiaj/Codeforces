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
    sort(arr,arr+n);
    bool f = false;
    for(int i=2; i<n; i++)
    {
        if(arr[i-1]+arr[i-2]>arr[i])
        {
            f = true;
            break;
        }
    }
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}



