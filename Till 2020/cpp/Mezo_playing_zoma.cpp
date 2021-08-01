#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,c1=0,c2=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='L') c1++;
        else c2++;
    }
    cout<<c1+c2+1<<endl;
}
