#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll t,i,j,k;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string str;
        cin>>str;
        k = n/2;
        int l=k;
        int h=k;
        for(i = k-1; i>=0; i--)
        {
            if(str[k]==str[i])
                l--;
            else
                break;
        }
        for(i = k+1; i<n; i++)
        {
            if(str[k]==str[i])
                h++;
            else
                break;
        }
        cout<<h-l+1<<endl;
    }
}



