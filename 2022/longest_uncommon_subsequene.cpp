#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2)
        cout<<"-1\n";
    else
        cout<<max(s1.size(),s2.size())<<"\n";
}

