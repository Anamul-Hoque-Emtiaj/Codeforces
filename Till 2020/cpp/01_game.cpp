#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,i,c=0,pr=0,cr=0;
        string s;
        cin>>s;
        l=s.size();
        for(i=0;i<l;)
        {
            if(s[i]!=s[i+1])
            {
               c++;
               pr=cr+1;
               cr=0;
               i=i+2;
            }
            else
            {
                cr++;
                if(s[i]==s[i-(cr+pr)]) c++;
                i++;
            }
        }
        cout<<c<<endl;
    }
}

