#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n,x,i,c=0;
    cin>>n>>x;
    bool f=false;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==x)
            f = true;
    }
    sort(arr,arr+n);
    for(i=0; i<n; i++)
    {
        if(arr[i]<x)
            c++;
    }
    if(f)
        cout<<x-c+1<<"\n";
    else
        cout<<x-c<<"\n";
}
