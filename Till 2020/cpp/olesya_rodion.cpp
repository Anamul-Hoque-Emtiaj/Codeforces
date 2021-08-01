#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long unsigned int n,t;
    cin>>n>>t;
    if(n>1) cout<<pow(10,n-1)*t+t<<endl;
    else if(n==1) cout<<"-1"<<endl;
}
