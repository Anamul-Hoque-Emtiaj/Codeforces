#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int c=0;
    for(int i=0; i<n; )
    {
        if(s1[i]==s2[c])
        {
            c++;
            i++;
        }
        else
        {
            i = i - c + 1;
            c=0;
        }
    }
    cout<<2*n-c<<"\n";
}
