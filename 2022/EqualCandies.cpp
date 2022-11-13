#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll arr[n],mini=10000005,c=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mini = min(mini,arr[i]);
        }
        for(int i=0; i<n; i++)
        {
            c+=(arr[i]-mini);
        }
        cout<<c<<"\n";
    }
}


