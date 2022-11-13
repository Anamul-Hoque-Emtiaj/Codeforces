#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int arr1[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr1[i];
        }
        cin>>m;
        int arr2[m];
        ll s=0;
        for(int i=0; i<m; i++)
        {
            cin>>arr2[i];
            s+=arr2[i];
        }
        cout<<arr1[s%n]<<endl;
    }
}



