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
        bool f = true;
        for(int i=1; i<str.size(); i++)
        {
            if((str[i]-'a') != ((str[i-1]-'a') + 1) && !(str[i]=='a' && str[i-1]=='z') )
            {
                f = false;
                break;
            }
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}



