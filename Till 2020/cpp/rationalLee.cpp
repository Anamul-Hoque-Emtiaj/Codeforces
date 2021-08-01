#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,s=0,in,x;
        cin>>n>>k;
        vector<int>a;
        vector<int>w;
        for(i=0;i<n;i++)
        {
           cin>>in;
           a.push_back(in);
        }
        for(i=0;i<k;i++)
        {
            cin>>in;
            w.push_back(in);
        }
        sort(a.begin(),a.end());
        sort(w.begin(),w.end(),cmp);
        for(i=n-1;i>=(n-k);i--) s=s+a[i];
        while(!w.empty())
        {
            x=(w.back()-1);
            while(x--) a.pop_back();
            s=s+a.back();
            a.pop_back();
            w.pop_back();
        }
        cout<<s<<endl;
    }
}

