#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        char str[n],str2[n];
        for(int i=0; i<n; i++)
        {
            cin>>str[i];
            str2[i] = str[i];
        }
        sort(str,str+n);
        for(int i=0; i<n; i++)
        {
            if(str2[i]!=str[i])
                c++;
        }
        cout<<c<<"\n";
    }
}



