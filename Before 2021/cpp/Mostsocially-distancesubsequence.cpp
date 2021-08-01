
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int p[n],i,mx=0,mn=200000,d1,d2=0,mxi,mni,a;
        for(i=0;i<n;i++)
        {
            cin>>p[i];
            if(mx<p[i])
            {
                mx=p[i];
                mxi=i;
            }
            if(mn>p[i])
            {
                mn=p[i];
                mni=i;
            }
        }
        if(mni<mxi)
        {
            a=n-mxi-1;
            cout<<a+2<<endl<<mn<<" ";
            for(i=mxi;i<n;i++) cout<<p[i]<<" ";
            cout<<endl;
        }
        else
        {
            d1=mx-mn;
            for(i=0;i<n-1;i++)
            {
                d2=d2+(abs(p[i]-p[i+1]));
            }
            if(d1>=d2)
            {
                cout<<"2"<<endl;
                cout<<mx<<" "<<mn<<endl;
            }
            else
            {
                cout<<n<<endl;
                for(i=0;i<n;i++)
                {
                    cout<<p[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
}
