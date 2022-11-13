#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    int c=0, x=0,r=0;
    while(!v.empty())
    {
        if(v.back()!=x)
        {
            if(x>c)
                r+=c;
            else if(x<c)
                r+=(c-x);
            x = v.back();
            c = 1;
        }
        else
            c++;
        v.pop_back();
    }
    if(x>c)
        r+=c;
    else if(x<c)
        r+=(c-x);
    cout<<r<<"\n";
}
