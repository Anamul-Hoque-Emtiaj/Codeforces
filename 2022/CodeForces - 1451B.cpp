#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string str;
        cin>>str;
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            bool f = false;
            for(int i=0; i<l-1; i++)
            {
                if(str[l-1]==str[i])
                {
                    f = true;
                    break;
                }
            }
            for(int i=r; i<n; i++)
            {
                if(str[r-1]==str[i])
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
}



