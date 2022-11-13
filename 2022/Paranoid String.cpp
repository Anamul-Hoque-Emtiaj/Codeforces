#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,v;
        cin>>n;
        string str;
        cin>>str;
        ll r = n;
        int f = str[0]-'0';
        for(int i=1; i<n; i++)
        {

            v = str[i]-'0';
            if(f^v==1)
            {
                r+=i;
                f = v;
            }
        }
        cout<<r<<endl;
    }
}



