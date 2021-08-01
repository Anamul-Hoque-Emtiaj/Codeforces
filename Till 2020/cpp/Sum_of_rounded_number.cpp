#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
    long long int t,r;
    cin>>t;
    while(t--)
    {
        long long n,i,c1=0;
        vector<int>v;
        cin>>n;
        while(n!=0)
        {
            r=n%(10);
            if(r!=0) c1++;
            v.push_back(r);
            n=n/10;
        }
        cout<<c1<<endl;
        for(i=0;i<v.size();i++)
        {
            if(v[i]!=0)
            {
                cout<<v[i]*pow(10,i)<<" ";
            }
        }
        cout<<endl;
    }
}

