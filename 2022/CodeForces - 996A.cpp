#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,r;
    cin>>n;
    r = (n/100) + (n%100/20) + (n%100%20/10) + (n%100%20%10/5) + (n%100%20%10%5);
    cout<<r<<"\n";
}






