#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long int nb,ns,nc,pb,ps,pc,r,i,l,n1=0,n2=0,n3=0,a,b,c,mn1,mn,a1,b1,c1,cb,cs,cc,t=0,tt;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]=='B') n1++;
        else if(s[i]=='S') n2++;
        else if(s[i]=='C') n3++;
    }
    if(n1>0) a=nb/n1;
    else a=0;
    if(n2>0) b=ns/n2;
    else b=0;
    if(n3>0) c=nc/n3;
    else c=0;
    mn1=min(a,b);
    mn=min(mn1,c);
    a1=a-mn;
    b1=b-mn;
    c1=c-mn;
    tt=n1*pb+n2*ps+n3*pc;
    while((a1>0||b1>0||c1>0)&&r>0)
    {
        if(a1>=n1)
        {
            a1=a1-n1;
            cb=0;
        }
        else cb=(n1-a1)*pb;
        if(b1>=n2)
        {
            b1=b1-n2;
            cs=0;
        }
        else cs=(n2-b1)*ps;
        if(c1>=n3)
        {
            c1=c1-n3;
            cc=0;
        }
        else cc =(n3-c1)*pc;
        r=r-(cb+cs+cc);
        t++;
    }
    cout<<mn+t+(r/tt)<<endl;
}
