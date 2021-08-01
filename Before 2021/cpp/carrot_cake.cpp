#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t,k,d,a;
    cin>>n>>t>>k>>d;
    a=floor((1.00*d)/t)+1;
    if(a*k>=n)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
