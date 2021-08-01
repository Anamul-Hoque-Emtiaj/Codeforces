#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=1,x;
    cin>>n;
    x=ceil((1.00*n)/2);
    string s1,s3;
    cin>>s1;
    n--;
    while(n--)
    {
        string s2;
        cin>>s2;
        if(s1==s2) c++;
        else s3=s2;
    }
    if(x<=c) cout<<s1<<endl;
    else cout<<s3<<endl;
}
/*
AZID
EERWBC
EERWBC
*/
