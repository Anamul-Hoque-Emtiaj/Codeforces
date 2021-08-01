#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        if((n*m)%2==0) cout<<(n*m)/2<<endl;
        else cout<<((n*m)/2)+1<<endl;
    }
}
