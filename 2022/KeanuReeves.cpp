#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int s=0;
    for(int i=0; i<n; i++)
    {
        s+=(str[i]-'0');
    }
    if(n%2!=0)
    {
        cout<<"1\n";
        cout<<str<<"\n";
    }
    else
    {
        if(n/2==s)
        {
            cout<<"2\n";
            char l = str[n-1];
            str.pop_back();
            cout<<str<<" "<<l<<"\n";
        }
        else
        {
            cout<<"1\n";
            cout<<str<<"\n";
        }
    }
}





