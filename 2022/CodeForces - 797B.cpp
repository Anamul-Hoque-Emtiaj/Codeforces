#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin>>n;
    ll pSum=0,nMax=-100000,pMin=100000,t;
    for(int i=0; i<n; i++)
    {
        cin>>t;
        if(t>0)
        {
            pSum+=t;
            if(t%2==1)
                pMin = min(pMin,t);
        }
        else
        {
            if((t*-1)%2==1)
                nMax = max(nMax,t);
        }
    }
    if(pSum%2==1)
        cout<<pSum<<endl;
    else
    {
        if((nMax*-1)<pMin)
            pSum+=nMax;
        else
            pSum-=pMin;
        cout<<pSum<<endl;
    }
}



