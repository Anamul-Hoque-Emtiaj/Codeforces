#include<bits/stdc++.h>
#include<list>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,in,ac,att,bc1=0,bt=0,c=1,ac1=0,bc;
        cin>>n;
        list<int>l;
        for(i=1;i<=n;i++)
        {
            cin>>in;
            l.push_back(in);
        }
        ac=l.front();
        att=l.front();
        l.pop_front();
        for(i=2;!l.empty();i++)
        {
            if(i%2==0)
            {
                do
                {
                    bc1=bc1+l.back();
                    l.pop_back();
                }while(bc1<=ac&&!l.empty());
                bc=bc1;
                bt=bt+bc;
                bc1=0;
            }
            else
            {
                do
                {
                    ac1=ac1+l.front();
                    l.pop_front();
                }while(ac1<=bc&&!l.empty());
                ac=ac1;
                att=att+ac;
                ac1=0;
            }
            c++;
        }
        cout<<c<<" "<<att<<" "<<bt<<endl;

    }
}

