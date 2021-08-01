#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,in,c=0,l,c1=0;
    cin>>n;
    list<int> s;
    list<int> :: iterator it;
    for(i=0; i<n; i++)
    {
        cin>>in;
        s.push_back(in);
    }
    for(it=s.begin(); it!=s.end(); it++)
        if(*it==1) c1++;

    if(c1==n) cout<<n-1<<endl;
    else
    {
        while(s.front()!=0)
        {
            s.pop_front();
            c++;
        }
        while(s.back()!=0)
        {
            s.pop_back();
            c++;
        }
        while(!s.empty())
        {
            if(s.front()==0) c++;
            s.pop_front();
        }
        cout<<c<<endl;
    }

}

