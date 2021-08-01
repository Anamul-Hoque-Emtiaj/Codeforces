#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,x;
        double r;
        cin>>a;
        r=(double)360/(180-a);
        x=(int)r;
        if(x==r) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

