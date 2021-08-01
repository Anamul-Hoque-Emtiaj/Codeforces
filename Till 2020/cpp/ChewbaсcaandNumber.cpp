#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
    long long int n,i;
    cin>>n;
    string s;
    //itoa(n,s,10);
    for(i=0;i<s.size();i++)
    {
        if(s[i]-'0'>4) cout<<'9'-s[i];
        else cout<<s[i];
    }
    cout<<endl;
}
