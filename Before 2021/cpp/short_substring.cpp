#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l,i;
        l=s.size();
        cout<<s[0]<<s[1];
        for(i=2;i<l-1;i++)
        {
            if(i%2!=0) cout<<s[i];
        }
        if(l>2) cout<<s[l-1];
        cout<<endl;
    }
}

