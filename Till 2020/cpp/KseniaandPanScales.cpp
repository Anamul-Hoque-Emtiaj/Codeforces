#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int i,l,it1,it2,d,e;
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]=='|') it1=i;
    }
    it2=s1.size()-1-it1;
    l=s2.size();
    d=abs(it1-it2);
    if((it1+it2+l)%2==0&&l>=d)
    {
        if(l==d)
        {
            if(it2>it1) cout<<s2<<s1<<endl;
            else cout<<s1<<s2<<endl;
        }
        else
        {
            e=(l-d)/2;
            if(it1>it2)
            {
                for(i=0;s1[i]!='|';i++) cout<<s1[i];
                for(i=0;i<e;i++) cout<<s2[i];
                cout<<'|';
                for(i=it1+1;i<s1.size();i++) cout<<s1[i];
                for(i=e;i<s2.size();i++) cout<<s2[i];

            }
            else
            {
                for(i=0;s1[i]!='|';i++) cout<<s1[i];
                for(i=0;i<e+d;i++) cout<<s2[i];
                cout<<'|';
                for(i=it1+1;i<s1.size();i++) cout<<s1[i];
                for(i=e+d;i<s2.size();i++) cout<<s2[i];
            }
            cout<<endl;
        }
    }
    else cout<<"Impossible"<<endl;
}
