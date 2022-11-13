#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int c=0;
    for(int i=0; i<str.size(); i++)
    {
        c+=(str[i]-'0');
    }
    if(c==0)
        cout<<"0\n";
    else
    {
        if(str.size()%2==0)
        {
            cout<<(str.size()/2)<<"\n";
        }
        else
        {
            if(c>1)
                cout<<(str.size()/2)+1<<"\n";
            else
                cout<<(str.size()/2)<<"\n";
        }
    }
}






