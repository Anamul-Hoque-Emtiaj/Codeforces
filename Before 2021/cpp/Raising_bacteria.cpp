#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,c=1;
    cin>>t;
    while(t>2)
    {
        if(t%2==0) t=t/2;
        else
        {
            t=(t-1)/2;
            c++;
        }
    }
    cout<<c<<endl;
}

