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
        ll n;
        cin>>n;
        ll arr[11][11];
        string str;
        for(i=0; i<11; i++)
        {
            for(j=0; j<11; j++)
            {
                arr[i][j]=0;
            }
        }
        for(i=0; i<n; i++)
        {
            cin>>str;
            arr[str[0]-'a'][str[1]-'a']++;
        }
        ll c=0;
        for(i=0; i<11; i++)
        {
            for(j=0; j<11; j++)
            {
                ll sum=0;
                for(k=0; k<11; k++)
                {
                    if(k!=j)
                    {
                        sum+=arr[i][k];
                    }
                }
                for(k=0; k<11; k++)
                {
                    if(k!=i)
                    {
                        sum+=arr[k][j];
                    }
                }
                c+=(sum*arr[i][j]);
            }
        }

        cout<<c/2<<endl;
    }
}
