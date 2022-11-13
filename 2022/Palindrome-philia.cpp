#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

int main()
{
    ll t=1,i,j,k;
    //cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        ll n = str.size();
        ll c=0;
        for(i=0; i<n/2; i++)
        {
            if(str[i]!=str[n-1-i])
                c++;
        }
        cout<<c<<endl;
    }
}
