#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0; i<n; i++)
    {
        if((str[i]-'0')%2==0)
            c+=(i+1);
    }
    cout<<c<<endl;
}



