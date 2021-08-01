#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,d;
    cin>>n;
    d=n-7;
    char s1[]="ROYG";
    char s2[]="BIV";
    for(i=0;i<4;i++)
    {
        cout<<s1[i];
    }
    for(i=0;i<d;i++)
    {
        cout<<s1[i%4];
    }

    for(i=0;i<3;i++)
    {
        cout<<s2[i];
    }


}
