#include<bits/stdc++.h>
using namespace std;

int c=0,l;

string zo(string p)
{
    int i;
    l=p.size();
    for(i=0;i<l-1;i++)
    {
        if(p[i]!=p[i+1])
        {
            p.erase(i,i+2);
            ///p.erase(i+1);
        }
        else c++;
    }
    return p;
}

int main()
{
    long long int n,a;
    cin>>n;
    string s;
    cin>>s;
    a=n/2+1;
    while(a--)
    {
        s=zo(s);
        if(c==l) break;
    }
    cout<<s.size()<<endl;
}
