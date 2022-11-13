#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

int main()
{
    ll t=1,i,j,k;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        ll s=0,c=0;
        for(i=0; i<n; i++)
        {
            s+=arr[i];
            if(s<=x)
                c+= ((x-s)/(i+1)+1);
        }
        cout<<c<<endl;
    }
}



