#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,a=0,b=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                if(s[i-1]==')'&&i!=0&&a>0)
                {
                    a=1;
                }
                else a++;
            }
            else
            {
                if(a>0) a--;
                else b++;
            }
        }
        cout<<b<<endl;
    }
}

