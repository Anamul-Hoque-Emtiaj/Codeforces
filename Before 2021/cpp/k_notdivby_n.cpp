#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long n,k,m,s,r;
        cin>>n>>k;
        m=n-1;
        s=k/m;
        r=k%m;
        if(r!=0)
        {
            cout<<s*n+r<<endl;
        }
        else
            cout<<s*n-1<<endl;
    }
}

