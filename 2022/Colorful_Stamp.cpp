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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll bc=0,rc=0;
        bool r = true;
        for(i=0; i<n; i++)
        {
            if(s[i]=='W')
            {
                if((bc>0 && rc==0)|| (bc==0 && rc>0))
                {
                    r = false;
                    break;
                }
                bc=0;
                rc=0;
            }
            else if(s[i]=='B')
                bc++;
            else
                rc++;

        }
        if((bc>0 && rc==0)|| (bc==0 && rc>0))
        {
            r = false;
        }
        if(r)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}



