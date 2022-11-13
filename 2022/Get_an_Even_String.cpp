#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

bool findS(vector<char> v, char c)
{
    bool r = false;
    for(ll i=0; i<v.size(); i++)
    {
        if(v[i]==c)
        {
            r = true;
            break;
        }
    }
    return r;
}

int main()
{
    ll t,i;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll s1 = s.size(),c=0;
        vector<char> v;
        for(i=0; i<s.size(); i++)
        {
            if(v.empty())
                 v.push_back(s[i]);
            else
            {
                if(v.back()==s[i])
                {
                    c+=2;
                    v.clear();
                }
                else if(findS(v,s[i]))
                {
                    c+=2;
                    v.clear();
                }
                else
                    v.push_back(s[i]);
            }
        }
        cout<<s1-c<<endl;
    }
}


