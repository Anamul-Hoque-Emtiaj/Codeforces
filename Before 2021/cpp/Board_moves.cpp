#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,p,s=8;
        cin>>n;
        if(n==1) cout<<"0"<<endl;
        else
        {
            p=((n+1)/2)-1;
            for(i=2; i<=p; i++)
            {
                s=s+8*pow(i,2);
            }
            cout<<s<<endl;
        }
    }
}

