#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r=0,s1=0,p=0,n,i;
        string s;
        char ch;
        cin>>s;
        n=s.size();
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='R') r++;
            else if(s[i]=='S') s1++;
            else p++;
        }
        if(r>=s1&&r>=p) ch='P';
        else if(s1>=r&&s1>=p) ch='R';
        else ch='S';
        while(n--) cout<<ch;
        cout<<endl;
    }
}

