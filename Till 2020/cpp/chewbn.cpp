#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
    long long unsigned int n,i,l;
    cin>>n;
    char s[20];
    itoa(n,s,10);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(i==0&&s[i]=='9') cout<<s[i];
        else if(s[i]-'0'>4) cout<<'9'-s[i];
        else cout<<s[i];
    }
    cout<<endl;
}

