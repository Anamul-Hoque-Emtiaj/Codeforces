#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int c=1;
        char a = str[0];
        vector<int> v,v2;
        for(int i=1; i<n; i++)
        {
            if(str[i]!=a)
            {
                v.push_back(c);
                v2.push_back(c);
                c=1;
                a = str[i];
            }
            else
                c++;
        }
        v.push_back(c);
        v2.push_back(c);
        c=0;
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i]%2!=0)
            {
                v[i]++;
                v[i+1]--;
                c++;
            }
        }
        cout<<c<<" ";
        if(c==0)
        {
            cout<<v2.size()<<"\n";
        }
        else
        {
            int r = 0;
            int fi = v2[0], la = v2[v2.size()-1];
            int f = v2.size();
            v2.pop_back();
            v2[0] = 1000000;
            sort(v2.begin(),v2.end());
            v2.pop_back();
            for(int i=0; i<v2.size(); i++)
            {
                if(v2[i]<=c)
                {
                    r++;
                    c-=v2[i];
                }

            }
            f-= 2*r;
            if(fi<=c)
            {
                f--;
                c-=fi;
            }
            if(la<=c)
            {
                f--;
            }
            cout<<f<<"\n";
        }
    }
}





