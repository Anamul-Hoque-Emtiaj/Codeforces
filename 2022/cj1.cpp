#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

int main()
{
    ll t=1,i,j,k;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        ll n;
        cin>>n;
        string arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(ll x=0; x<n; x++)
        {
            ll c=0;
            for(i=0; i<n; i++)
            {
                if(arr[i]!="")
                {
                    for(j=0; j<n; j++)
                    {
                        if(i!=j && arr[j]!="")
                        {
                            if(arr[i][arr[i].size()-1]==arr[j][0])
                            {
                                arr[i]+=arr[j];
                                arr[j]="";
                                c++;
                            }
                            else if(arr[j][arr[j].size()-1]==arr[i][0])
                            {
                                arr[i]=arr[j]+arr[i];
                                arr[j]="";
                                c++;
                            }
                        }
                    }
                }
            }
            if(c==0)
                break;
        }
        string str="";
        for(i=0; i<n; i++)
            str+=arr[i];
        bool ara[26];
        for(i=0; i<26; i++)
            ara[i] = false;
        bool r=true;
        for(i=0; i<str.size(); i++)
        {
            if(!ara[str[i]-'A'])
                ara[str[i]-'A'] = true;
            else
            {
                if(str[i]!=str[i-1] && i>0)
                {
                    r = false;
                    break;
                }
            }
        }
        if(r)
            cout<<"Case #"<<k<<": "<<str<<endl;
        else
            cout<<"Case #"<<k<<": "<<"IMPOSSIBLE"<<endl;
    }
}
