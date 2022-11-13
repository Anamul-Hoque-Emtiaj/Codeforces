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
        int arr[26];
        memset(arr,0,sizeof(arr));
        for(int i=0; i<n; i++)
            arr[str[i]-'a']++;
        bool f = true;
        for(int i=0; i<26; i++)
        {
            if(arr[i]%2!=0)
            {
                f = false;
                break;
            }
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}



