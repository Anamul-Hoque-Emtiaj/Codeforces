#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        v.push_back(n);
    if(v.size()<k)
        cout<<"-1\n";
    else
    {
        for(int i=0; i<k-1; i++)
            cout<<v[i]<<" ";
        int p=1;
        for(int i=k-1; i<v.size(); i++)
            p*=v[i];
        cout<<p<<"\n";
    }
}


