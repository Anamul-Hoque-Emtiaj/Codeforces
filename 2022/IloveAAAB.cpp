#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

int main()
{
    ll t=1,i,j,k;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        bool r=true;
        ll a=0,b=0;
        if(str[0]=='A')
            a=1;
        else
            b=1;

        if(str[str.size()-1]!='B')
            r = false;

        for(i=1; i<str.size(); i++)
        {
            if(str[i]=='A' && str[i-1]=='A')
            {
                a++;
            }
            else if(str[i]=='A' && str[i-1]=='B')
            {
                if(a<b)
                {
                    r = false;
                    break;
                }
                else
                {
                    a = 1;
                }
                b = 0;
            }
            else if(str[i]=='B')
            {
                b++;
            }
        }
        if(a<b)
        {
            r = false;
        }
        if(r)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}



