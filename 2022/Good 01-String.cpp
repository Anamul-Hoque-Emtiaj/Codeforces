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
        vector<int> v;
        for(int i=1; i<n; i++)
        {
            if(str[i]!=a)
            {
                v.push_back(c);
                c=1;
                a = str[i];
            }
            else
                c++;
        }
        v.push_back(c);
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
        cout<<c<<"\n";
    }
}




