#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    freopen("alimagde.in", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<n-(int)((sqrt(1+8*n)-1)/2)<<endl;
    }
}



