#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char s[200000],a='0',b='0';
        cin>>s;
        int i,l,c=0,s1=0,e,r,m=200000,c1=0;
        l=strlen(s);
        for(i=0;i<l-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                if(s[i+1]!=a&&s[i+1]!=b)
                {
                    a=s[i];
                    b=s[i+1];
                    if(c==0) s1=i;
                    c++;
                    c1++;
                    if(c==2) e=i+1;

                }
                else
                {
                    c=1;
                    s1=i;
                }
            }
            if(c==2)
            {
                r=e-s1+1;
                if(r<m) m=r;
                c=0;
                a=s[i];
                b=s[i+1];

            }
        }
        if(c1>=2) cout<<m<<endl;
        else cout<<"0"<<endl;
    }
}

