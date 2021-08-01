#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int y,w,m,d;
    cin>>y>>w;
    m=max(y,w);
    d=6-m+1;
    if(d%6==0) cout<<"1/1"<<endl;
    else if(d%3==0) cout<<d/3<<"/2"<<endl;
    else if(d%2==0) cout<<d/2<<"/3"<<endl;
    else cout<<d<<"/6"<<endl;
}
