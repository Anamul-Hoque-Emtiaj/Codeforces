#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,s=0,i;
        cin>>n;
        if((n/2)%2!=0) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(i=1;i<=n/2;i++)
            {
                cout<<2*i<<" ";
                s=s+2*i;
            }
            for(i=1;i<=n/2-1;i++)
            {
                s=s-(2*i-1);
                cout<<2*i-1<<" ";
            }
            cout<<s<<endl;
        }
    }
}
