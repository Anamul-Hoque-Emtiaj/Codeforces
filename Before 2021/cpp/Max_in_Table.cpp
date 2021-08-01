#include<bits/stdc++.h>
using namespace std;

int mx(int r,int c)
{
    if(r==1) return 1;
    if(c==1) return 1;
    return mx(r-1,c)+mx(r,c-1);
}

int main()
{
    int i,n,j,s;
    cin>>n;
    s=mx(n,n);
    cout<<s<<endl;
}
