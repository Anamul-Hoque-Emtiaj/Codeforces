#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    string str,temp;
    cin>>str;
    temp = str;
    int m;
    cin>>m;
    while(m--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        for(int i=l-1; i<r; i++)
        {
            int t = l-1 + (i-l+1+k)%(r-l+1);
            str[t] = temp[i];
        }
        temp = str;
    }
    cout<<str<<endl;
}



