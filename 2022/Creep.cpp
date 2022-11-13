#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        string s;
        if(a>b)
        {
            for(int i=1; i<=b; i++)
            {
                s = s + '0';
                s = s + '1';
            }
            for(int i=1; i<=a-b; i++)
            {
                s = s + '0';
            }
        }
        else
        {
            for(int i=1; i<=a; i++)
            {
                s = s + '1';
                s = s + '0';
            }
            for(int i=1; i<=b-a; i++)
            {
                s = s + '1';
            }
        }
        cout<<s<<endl;

    }
}



