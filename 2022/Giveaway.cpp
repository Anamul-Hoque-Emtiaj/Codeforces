#include<iostream>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    bool arr[26];
    for(int i=0; i<26; i++)
        arr[i] = false;
    for(int i=0; i<s1.size(); i++)
        arr[s1[i]-'a'] = true;
    bool ans = false;
    for(int i=0; i<s2.size(); i++)
    {
        if(arr[s2[i]-'a'])
        {
            ans = true;
            break;
        }
    }
    if(ans)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}



