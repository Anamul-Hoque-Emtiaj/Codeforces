#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    string s;
    cin>>s;
    for(i=n-2;i>=0;i=i-2)cout<<s[i];
    if(n%2==0)
    {
        for(i=1;i<n;i=i+2)cout<<s[i];
    }
    else
    {
        for(i=0;i<n;i=i+2)cout<<s[i];
    }
}
