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
        ll n;
        cin>>n;
        ll arr[n];
        ll ara[n];
        ara[0] = 0;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i>0)
                ara[i] = arr[i] - arr[i-1];
        }
        ll c2=0,c3=0,c=0;
        for(i=0; i<n; i++)
        {
            if(ara[i]==2)
                c2++;
            if(ara[i]==3)
                c3++;
            if(ara[i]>3)
                c++;
        }
        if(c>0)
            cout<<"NO\n";
        else if(c3>1)
            cout<<"NO\n";
        else if(c3==1 && c2!=0)
            cout<<"NO\n";
        else if(c2>2)
            cout<<"NO\n";
        else
            cout<<"YES\n";


    }
}



