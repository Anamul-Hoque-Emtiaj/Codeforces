#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    long long int l1,l2,mx,mn,c=0,i;
    l1=a.size();
    l2=b.size();
    mn=min(l1,l2);
    mx=max(l1,l2);
    if(a==b) cout<<"-1"<<endl;
    else
    {
        cout<<mx<<endl;
    }
}
