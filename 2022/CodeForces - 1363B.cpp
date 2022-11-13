#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isSubsequence(string s1, string s2)
{
    int i,j;
    for(i=0,j=0; i<s1.size()&&j<s2.size(); i++)
    {
        if(s1[i]==s2[j])
            j++;
    }
    return !(j==s2.size());
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if(isSubsequence(str,"010") && isSubsequence(str,"101"))
        {
            cout<<"0\n";
        }
        else
        {
            int s = str.size();
            int one[s];
            one[0] = (str[0]-'0');
            for(int i=1; i<s; i++)
            {
                one[i] = one[i-1] + (str[i]-'0');
            }
            int ans = min(one[s-1],s-one[s-1]);
            for(int i=0; i<s; i++)
            {
                ans = min(ans,min((i+1-one[i])+(one[s-1]-one[i]),one[i]+(s-i-1)-(one[s-1]-one[i])));
            }
            cout<<ans<<endl;
        }
    }
}



