#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,c=0;
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if((n-i)%i==0) c++;
    }
    cout<<c<<endl;
}

