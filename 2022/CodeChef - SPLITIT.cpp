#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        char c = str[n-1];
        bool f = false;
        for(int i=0; i<n-1; i++)
        {
            if(str[i]==c)
            {
                f = true;
                break;
            }
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}




