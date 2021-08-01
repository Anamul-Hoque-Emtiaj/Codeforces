#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t,r,i;
    cin>>n;
    if(n%2==0)
    {
        t=n/2;
        cout<<t<<endl;
        for(i=1;i<=t;i++) cout<<"2 ";
    }
    else
    {
        r=n-3;
        t=r/2;
        cout<<t+1<<endl;
        for(i=1;i<=t;i++)
            cout<<"2 ";
        cout<<"3";
    }
    cout<<endl;
}

