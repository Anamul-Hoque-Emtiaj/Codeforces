#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        if(r>=2*l)
            cout<<"-1\n";
        else
            cout<<r<<endl;
    }
}



