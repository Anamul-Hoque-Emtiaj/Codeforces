#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;
    string s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    char mx1,mn1,mx2,mn2,mx3,mn3;
    if(s1[1]=='<')
    {
        mx1=s1[2];
        mn1=s1[0];
    }
    else
    {
        mx1=s1[0];
        mn1=s1[2];
    }
    if(s2[1]=='<')
    {
        mx2=s2[2];
        mn2=s2[0];
    }
    else
    {
        mx2=s2[0];
        mn2=s2[2];
    }
    if(s3[1]=='<')
    {
        mx3=s3[2];
        mn3=s3[0];
    }
    else
    {
        mx3=s3[0];
        mn3=s3[2];
    }
    if(mx1==mx2)
    {
        cout<<mn3<<mx3<<mx1<<endl;
    }
    else if(mx2==mx3)
    {
        cout<<mn1<<mx1<<mx2<<endl;
    }
    else if(mx3==mx1)
    {
        cout<<mn2<<mx2<<mx3<<endl;
    }
    else cout<<"Impossible"<<endl;

}
