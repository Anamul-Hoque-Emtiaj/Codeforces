#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n,x,i,c1=0,c2=0;
        cin>>n>>x;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0) c1++;
            else c2++;
        }
        if(c1==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(c1>=x)
        {
            if(x%2!=0) cout<<"YES"<<endl;
            else
            {
                if(c2>0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
        else
        {
            if(c1%2!=0) cout<<"YES"<<endl;
            else
            {
                if((c1-1+c2)>=x) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
}

