#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n,i,v;
    cin>>n;
    string str;
    cin>>str;
    stack<int> st;
    for(i=0; i<n; i++)
    {
        v = str[i]-'0';
        if(st.empty())
            st.push(v);
        else
        {
            int t = st.top();
            if(v==t)
                st.push(v);
            else
                st.pop();
        }
    }
    cout<<st.size()<<"\n";
}



