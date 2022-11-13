#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0; i<2*n; i++)
        cin>>arr[i];
    sort(arr,arr+2*n);
    int s1=0,s2=0;
    for(int i=0; i<n; i++)
    {
        s1+=arr[i];
        s2+=arr[n+i];
    }
    if(s1==s2)
        cout<<"-1\n";
    else
    {
        for(int i=0; i<2*n; i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
    }
}
