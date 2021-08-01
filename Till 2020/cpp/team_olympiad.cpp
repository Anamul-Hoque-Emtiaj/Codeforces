#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,c1=0,c2=0,c3=0,m,t1=0,t2=0,t3=0;
    cin>>n;
    int a[n];
    list<int>a1;
    list<int>a2;
    list<int>a3;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            c1++;
            a1.push_back(i+1);
        }
        else if(a[i]==2)
        {
            c2++;
            a2.push_back(i+1);
        }
        else
        {
            c3++;
            a3.push_back(i+1);
        }
    }
    m=min(c1,min(c2,c3));
    cout<<m<<endl;
    while(m--)
    {
        cout<<a1.front()<<' ';
        a1.pop_front();
        cout<<a2.front()<<' ';
        a2.pop_front();
        cout<<a3.front()<<endl;
        a3.pop_front();
    }
}
