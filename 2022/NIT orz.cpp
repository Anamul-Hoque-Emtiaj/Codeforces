#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll z;
        int n;
        cin>>n>>z;
        ll arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        ll mx = -1;
        for(int i=0; i<n; i++)
        {
            mx = max(mx,arr[i]|z);
        }
        cout<<mx<<endl;
    }
}



