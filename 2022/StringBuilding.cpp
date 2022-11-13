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
        ll ca=0,cb=0;
        bool r = true;
        for(i=0; i<str.size(); i++)
        {
            if(str[i]=='a')
            {
                ca++;

                if(cb==1)
                {
                    r = false;
                    break;
                }
                cb=0;
            }
            else
            {
                cb++;

                if(ca==1)
                {
                    r = false;
                    break;
                }
                ca=0;
            }
        }
        if(cb==1)
        {
            r = false;
        }
        if(ca==1)
        {
            r = false;
        }
        ca=0;
        if(r)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}



