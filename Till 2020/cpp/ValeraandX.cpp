#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,p=0;
    cin>>n;
    char s[n][n],ch1,ch2;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++) cin>>s[i][j];
    }
    ch1=s[0][0];
    ch2=s[0][1];
    if(ch1==ch2) cout<<"NO"<<endl;
    else
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==j||(i+j)==n-1)
                {
                    if(s[i][j]!=ch1)
                    {
                        p=1;
                        break;
                    }
                }
                else
                {
                    if(s[i][j]!=ch2)
                    {
                        p=1;
                        break;
                    }
                }
            }
        }
        if(p==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
