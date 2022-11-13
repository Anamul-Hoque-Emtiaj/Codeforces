#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int, int>>v1,v2;
    int m1=0,m2=0,f,s;
    for(int i=0; i<n; i++)
    {
        cin>>f>>s;
        v1.push_back(make_pair(f,s));
    }
    for(int i=0; i<n; i++)
    {
        cin>>f>>s;
        v2.push_back(make_pair(f,s));
    }
    /*for(int i=1; i<n; i++)
    {
        if(v1[i].first<v1[m1].first)
            m1 = i;
        if(v2[i].first>v2[m2].first)
            m2 = i;
    }*/
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    cout<<v1[0].first+v2[n-1].first<<" "<<v1[0].second+v2[n-1].second<<endl;
}



