#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t;
    cin>>n>>t;
    if(t==10)
    {
        if(n==1) cout<<"-1"<<endl;
        else
        {
            cout<<"1";
            n--;
            while(n--) cout<<"0";
            cout<<endl;
        }
    }
    else
    {
        while(n--) cout<<t;
        cout<<endl;
    }
}
