#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    stack<ll> st;
    for(int i=n-1; i>=0; i--)
    {
        if(st.empty())
            st.push(arr[i]);
        else
        {
            ll t = st.top();
            if(arr[i]<t)
                st.push(arr[i]);
            else
            {
                if(t-1>0)
                    st.push(t-1);
            }
        }
    }
    ll r=0;
    while(!st.empty())
    {
        r+=st.top();
        st.pop();
    }
    cout<<r<<endl;
}



