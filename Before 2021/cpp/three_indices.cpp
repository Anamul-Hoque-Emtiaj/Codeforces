#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],i,fi,c=0,li=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>a[i-1]&&i>0)
            {
                c++;
                if(c==1) fi=i-1;
            }
        }
        if(c==0) cout<<"NO"<<endl;
        else
        {
            for(i=fi;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    li=i;
                    break;
                }
            }
            if(li==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl<<li<<" "<<li+1<<" "<<li+2<<endl;
        }
    }
}

