#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,i,c1=0,f1,l1,s1,s2,s3=0,c0=0,c=0,mx=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                c1++;
                l1=i;
                if(c1==1) f1=i;
            }
        }
        if(c1==0)
        {
            cout<<ceil((n*1.0)/(k+1))<<endl;
        }
        else if(c1==1)
        {
            s1=((f1*1.0)/(k+1));
            s2=(((n-f1-1)*1.0)/(k+1));
            cout<<s1+s2<<endl;
        }
        else
        {
            s1=((f1*1.0)/(k+1));
            s2=(((n-l1-1)*1.0)/(k+1));
            for(i=f1+1;i<=l1;i++)
            {
                if(s[i]=='0') c0++;
                else
                {
                    mx=c0;
                    c0=0;
                }
                if(mx>=(2*k+1))
                {
                    s3=s3+1+((mx-(2*k+1))/(k+1));
                }
            }
            cout<<s1+s2+s3<<endl;
        }
    }
}

