#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    string s;
    cin>>s;
    long long int a[n],i,ll,rf,cr=0,mn=200000000000000,cu,cl=0;
    list<int>li;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            ll=i;
            cl++;
        }
        else
        {
            cr++;
            if(cr==1) rf=i;
        }
        if(s[i]=='R'&&s[i+1]=='L') li.push_back(i);
    }
    if(rf>ll||cr==0||cl==0) cout<<"-1"<<endl;
    else
    {
        while(!li.empty())
        {
            cu=(a[li.front()+1]-a[li.front()])/2;
            if(mn>cu) mn=cu;
            li.pop_front();
        }
        cout<<mn<<endl;
    }
}
