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
        ll arr[2*n];
        for(int i=0; i<2*n; i++)
            cin>>arr[i];
        sort(arr,arr+2*n);
        cout<<arr[n]-arr[n-1]<<endl;
    }
}

