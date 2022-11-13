#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

int main()
{
    ll t=1,i,j,k;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        bitset<200001> bt(str);
        vector<ll> v;
        if(k%2==0)
        {
            ll c = n - bt.count();
            if(c>=k)
            {
                for(i=0; i<n; i++)
                {
                    if(str[i]=='1')
                    {
                        v.push_back(0);
                    }
                    else
                    {
                        if(k>0)
                        {
                            str[i] = '1';
                            v.push_back(1);
                            k--;
                        }
                        else
                        {
                            v.push_back(0);
                        }
                    }
                }
            }
            else
            {
                k -=c;
                if(k%2==0)
                {
                    for(i=0; i<n; i++)
                    {
                        if(str[i]=='0')
                        {
                            v.push_back(1);
                        }
                        else
                            v.push_back(0);
                        str[i] = '1';
                    }
                    ll z = v.back();
                    v.pop_back();
                    v.push_back(z+k);
                }
                else
                {
                    for(i=0; i<n; i++)
                    {
                        if(str[i]=='0')
                        {
                            v.push_back(1);
                        }
                        else
                            v.push_back(0);
                        str[i] = '1';
                    }
                    ll z = v.back();
                    v.pop_back();
                    v.push_back(z+k);
                    str[n-1] = '0';
                }
            }
        }
        else
        {
            ll c = bt.count();
            if(c>=k)
            {
                for(i=0; i<n; i++)
                {
                    if(str[i]=='1')
                    {
                        if(k>0)
                        {
                            k--;
                            v.push_back(1);
                        }
                        else
                        {
                            str[i] = '0';
                            v.push_back(0);
                        }
                    }
                    else
                    {
                        str[i] = '1';
                        v.push_back(0);
                    }
                }
            }
            else
            {
                k -=c;
                if(k%2==0)
                {
                    for(i=0; i<n; i++)
                    {
                        if(str[i]=='0')
                        {
                            v.push_back(0);
                        }
                        else
                            v.push_back(1);
                        str[i] = '1';
                    }
                    ll z = v.back();
                    v.pop_back();
                    v.push_back(z+k);
                }
                else
                {
                    for(i=0; i<n; i++)
                    {
                        if(str[i]=='1')
                        {
                            v.push_back(1);
                        }
                        else
                            v.push_back(0);
                        str[i] = '1';
                    }
                    ll z = v.back();
                    v.pop_back();
                    v.push_back(z+k);
                    str[n-1] = '0';
                }
            }
        }
        cout<<str<<endl;
        for(i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}


