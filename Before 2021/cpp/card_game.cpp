#include<bits/stdc++.h>
using namespace std;

int main()
{
    char f[2];
    char s[5][2];
    int i,j,x=0;
    for(i=0;i<2;i++) cin>>f[i];
    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>s[i][j];
        }

    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {
            if(s[i][j]==f[0]||s[i][j]==f[1])
            {
                x=1;
                break;
            }
        }

    }
    if(x==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
