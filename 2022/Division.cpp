#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

int main()
{
    ll t=1,i,j,k;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n>=1900)
            cout<<"Division 1"<<endl;
        else if(n>=1600&&n<=1899)
            cout<<"Division 2"<<endl;
        else if(n>=1400&&n<=1599)
            cout<<"Division 3"<<endl;
        else
            cout<<"Division 4"<<endl;
    }
}



