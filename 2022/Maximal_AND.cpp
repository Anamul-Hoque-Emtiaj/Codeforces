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
        cin>>n>>k;
        unsigned long long arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        ll sum=0;
        for(i=30; i>=0; i--)
        {
            ll c=0;
            for(j=0; j<n; j++)
            {
                bitset<31>bt(arr[j]);
                if(bt[i]==0)
                    c++;
            }
            if(k>=c)
            {
                k-=c;
                sum+=pow(2,i);
            }
        }
        cout<<sum<<endl;
    }
}
