#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long n,i,in,x=1,c,d;
        cin>>n;
        list<int>a;
        list<int>b;
        for(i=1; i<=n; i++)
        {
            cin>>in;
            a.push_back(in);
        }
        for(i=1; i<=n; i++)
        {
            cin>>in;
            b.push_back(in);
        }
        while(!a.empty()&&!b.empty())
        {
            c=a.front();
            d=b.front();
            if(a.front()==b.front())
            {
                if(a.front()==0&&b.front()==0)
                {
                    a.pop_front();
                    b.pop_front();
                }
                else
                {
                    a.pop_front();
                    b.pop_front();

                    if(a.front()<b.front())
                    {
                        if(c==0)
                        {
                            x=0;
                            break;
                        }
                        else if(c+a.front()<0)
                        {
                            x=0;
                            break;
                        }
                    }
                    else if(a.front()>b.front())
                    {
                        if(c==0)
                        {
                            x=0;
                            break;
                        }
                        else if(c+a.front()>0)
                        {
                            x=0;
                            break;
                        }
                    }

                }
            }

            else
            {
                x=0;
                break;
            }
            if(x==0) cout<<"NO"<<endl;
            else if(x==0) cout<<"YES"<<endl;
        }
    }
}
