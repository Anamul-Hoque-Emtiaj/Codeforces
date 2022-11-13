#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll t=1,i,j,k;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
            cout<<"0\n";
        else if(n==2)
            cout<<"1\n";
        else if(n==3)
            cout<<"2\n";
        else if(n%2==0)
            cout<<"2\n";
        else
            cout<<"3\n";
    }
}

