#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int ara[n],arb[n];
        for(i=0; i<n; i++)
            cin>>ara[i];
        for(i=0; i<n; i++)
            cin>>arb[i];
        sort(ara,ara+n);
        sort(arb,arb+n);
        for(i=0; i<n; i++)
            cout<<ara[i]<<" ";
        cout<<"\n";
        for(i=0; i<n; i++)
            cout<<arb[i]<<" ";
        cout<<"\n";
    }
}



