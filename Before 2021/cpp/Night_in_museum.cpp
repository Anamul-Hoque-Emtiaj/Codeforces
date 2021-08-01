#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c,i,l;
    l=s.size();
    if((s[0]-'a')>13) c=abs(26-(s[0]-'a'));
    else c=abs(s[0]-'a');
    for(i=0;i<l-1;i++)
    {
        if(abs(s[i]-s[i+1])<=13) c=c+abs(s[i]-s[i+1]);
        else c=c+26-abs(s[i]-s[i+1]);
    }
    cout<<c<<endl;
}
