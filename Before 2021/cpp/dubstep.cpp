#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long int i,c=0;
    for(i=0;i<s.size();)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            if(c!=0)
                cout<<" ";
            i=i+3;
        }
        else
        {
            cout<<s[i];
            i++;
            c++;
        }
    }
    cout<<endl;
}
