#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a1,a2,a3,a4,l,i,a=0,b=0,c=0,d=0;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]=='1') a++;
        else if(s[i]=='2') b++;
        else if(s[i]=='3') c++;
        else if(s[i]=='4') d++;
    }
    cout<<(a1*a)+(a2*b)+(a3*c)+(a4*d)<<endl;
}
