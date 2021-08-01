#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cl=0,fl,fr,lr,cr=0,ll;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            cl++;
            ll=i;
            if(cl==1)
            {
                fl=i;
            }
        }
        else if(s[i]=='R')
        {
           lr=i;
           cr++;
           if(cr==1)
            {
                fr=i;
            }
        }
    }
    if(cr==0) cout<<ll+1<<" "<<fl<<endl;
    else if(cl==0) cout<<fr+1<<" "<<lr+2<<endl;
    else
    {
        if(lr<fl) cout<<fr+1<<" "<<lr+1<<endl;
        else if(ll<fr) cout<<ll+1<<" "<<fl+1<<endl;
        else cout<<lr<<" "<<lr+1<<endl;

    }
}
