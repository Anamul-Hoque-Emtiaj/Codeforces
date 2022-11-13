#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c=0,r=0,l=0;
        cin>>n;
        string str;
        cin>>str;
        ll counts[10];
        bool explore[10];
        for(int i=0; i<10; i++)
        {
            counts[i] = 0;
            explore[i] = false;
        }
        for(int i=0; i<n; i++)
        {
            counts[str[i]]++;
            if(!explore[str[i]])
            {
                explore[str[i]] = true;
                c++;
            }
            bool st = false;
            for(int j=0; j<10; j++)
            {
                if(counts[j]>c)
                {
                    st = true;
                    break;
                }
            }
        }
    }
}



