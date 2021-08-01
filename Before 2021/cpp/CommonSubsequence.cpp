#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi acos(-1)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n],b[m],i,j,c=0;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<m;i++) cin>>b[i];
        list<int>li;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    c++;
                    li.push_back(a[i]);
                    break;
                }
            }
        }
        if(c==0) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl<<1<<" "<<li.front()<<endl;
        }
    }
}

