#include<bits/stdc++.h>
using namespace std;

struct btu
{
    char s[5];
};

int main()
{
    int n,i,j,p,c=0;
    cin>>n;
    struct btu a[n];
    for(i=1;i<=n;i++)
    {
       cin>>a[i].s;
    }
    for(i=1;i<=n;i++)
    {
        if((a[i].s[0]=='O'&&a[i].s[1]=='O')||(a[i].s[3]=='O'&&a[i].s[4]=='O'))
        {
            c=1;
            p=i;
            break;
        }
    }
    if(c==1)
    {
        cout<<"YES"<<endl;
        for(i=1;i<=n;i++)
        {
            if(i!=p)
            {
                cout<<a[i].s[0]<<a[i].s[1]<<a[i].s[2]<<a[i].s[3]<<a[i].s[4]<<endl;
            }
            else
            {
                if(a[i].s[0]=='O'&&a[i].s[1]=='O')
                {
                    cout<<"++";
                    cout<<a[i].s[2]<<a[i].s[3]<<a[i].s[4]<<endl;
                }
                else if(a[i].s[3]=='O'&&a[i].s[4]=='O')
                {
                    cout<<a[i].s[0]<<a[i].s[1]<<a[i].s[2];
                    cout<<"++"<<endl;

                }
            }
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
