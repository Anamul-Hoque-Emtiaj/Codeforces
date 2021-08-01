#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,c=0,cr;
    cin>>n;
    for(i=1;n>=(i*(i+1))/2;i++)
    {
        cr=(i*(i+1))/2;
        n=n-cr;
        c++;
    }
    cout<<c<<endl;
}

