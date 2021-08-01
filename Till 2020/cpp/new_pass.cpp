#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i;
    cin>>n>>k;
    char ch='a';
    for(i=1;i<=n;i++)
    {
        if(i%k==0)
        {
            cout<<ch;
            ch='a';
        }
        else
        {
            cout<<ch;
            ch++;
        }
    }
}
