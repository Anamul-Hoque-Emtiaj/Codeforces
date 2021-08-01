#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,l1,l2,c=1;
    string s,t;
    cin>>s>>t;
    l1=s.size();
    l2=t.size();
    for(i=0,j=0;i<l2;i++)
    {
        if(s[j]==t[i])
        {
            c++;
            j++;
        }
    }
    cout<<c<<endl;
}
