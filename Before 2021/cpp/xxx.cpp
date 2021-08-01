#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,i,s=0,p=0;
        cin>>n>>x;
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        ///sort(a,a+n);
        if(s%x!=0) cout<<n<<endl;
        else
        {
            for(i=0;i<n;i++)
            {
                s=s-a[i];
                if(s%x!=0)
                {
                    p=n-i-1;
                    break;
                }
            }
            if(p==0) cout<<"-1"<<endl;
            else cout<<p<<endl;
        }
    }
}

