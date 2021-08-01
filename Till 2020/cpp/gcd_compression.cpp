#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,in,c=0;
        cin>>n;
        vector<int>a;
        vector<int>:: iterator it1,it2,it3,it4,it5;
        for(i=1;i<=2*n;i++)
        {
            cin>>in;
            a.push_back(in);
        }
        it1=a.begin();
        it3=it1;
        it2=a.end();
        while(c<3)
        {
            if(*it1%2==*it2%2)
            {
                it1=it4;
                it2=it5;
                cout<<it1-it3+1<<' '<<it2-it3<<endl;
                a.erase(it1);
                a.insert(it4,-100);
                a.erase(it2);
                a.insert(it5,-100);
                it2=a.end();
                it1++;
                c++;
            }
            else
                it2--;
        }
    }
}

