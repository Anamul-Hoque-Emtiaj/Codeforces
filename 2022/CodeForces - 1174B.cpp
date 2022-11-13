#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n,e=0,o=0;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            e++;
        else
            o++;
    }
    if(o==0||e==0)
    {
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    else
    {
        sort(arr,arr+n);
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}



