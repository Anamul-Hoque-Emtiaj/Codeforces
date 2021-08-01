#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
    char s[100005];
    cin>>s;
    int i,l,c=0,sum=0;
    l=strlen(s);
    while(l>1)
    {
        for(i=0;i<l;i++)
        {
           sum=sum+(s[i]-'0');
        }
        if(sum>9)
        {
            c++;
            itoa(sum,s,10);
            sum=0;
            l=strlen(s);
        }
        else
        {
            c++;
            break;
        }
    }
    cout<<c<<endl;

}
