#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,r,m,i,r1;
        cin>>n>>k;
        m=n;
        if((n%2!=0&&k%2==0)||(n<k)) cout<<"NO"<<endl;
        else if(n%2==0&&k%2==0)
        {
            if(n/k==0) cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                r=n/k;
                for(i=1;i<k;i++)
                {
                    cout<<r<<" ";
                }
                cout<<n-(k-1)*r<<endl;
            }
        }
        else if(n%2==0&&k%2!=0)
        {
            if(n/k==0) cout<<"NO"<<endl;
            else
            {
                r1=n/k;
                if(r1%2==0)
                    {cout<<"YES"<<endl;r=r1;}
                else {
                        r=r1-1;
                    if(r==0) cout<<"NO"<<endl;
                    else cout<<"YES"<<endl;
                }
                if(r!=0)
                {
                    for(i=1;i<k;i++)
                    {
                        cout<<r<<" ";
                    }
                    cout<<n-(k-1)*r<<endl;
                }

            }
        }
        else if(n%2!=0&&k%2!=0)
        {
            if(n/k==0) cout<<"NO"<<endl;
            else
            {
                r1=n/k;
                if(r1%2!=0)
                    {cout<<"YES"<<endl;r=r1;}
                else {
                         r=r1-1;
                    if(r==0) cout<<"NO"<<endl;
                    else cout<<"YES"<<endl;
                }
                if(r!=0)
                {
                    for(i=1;i<k;i++)
                    {
                        cout<<r<<" ";
                    }
                    cout<<n-(k-1)*r<<endl;
                }

            }
        }
    }
}

