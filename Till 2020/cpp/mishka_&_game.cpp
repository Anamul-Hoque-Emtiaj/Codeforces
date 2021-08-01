#include<bits/stdc++.h>
using namespace std;

struct mg
{
    int m,c;
};

int main()
{
    int n,s1=0,s2=0,i;
    cin>>n;
    struct mg a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i].m>>a[i].c;
        if(a[i].m>a[i].c) s1++;
        else s2++;
    }
    if(s1>s2) cout<<"Mishka"<<endl;
    else if(s1==s2) cout<<"Friendship is magic!^^"<<endl;
    else
        cout<<"Chris"<<endl;
}
