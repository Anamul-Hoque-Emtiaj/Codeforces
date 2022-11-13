#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if((str[0]-'0'+str[1]-'0'+str[2]-'0')==str[3]-'0'+str[4]-'0'+str[5]-'0')
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}


