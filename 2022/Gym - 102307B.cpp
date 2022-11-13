#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    string str;
    cin>>str;
    int s = str.size();
    bool f = false;
    for(int i=0; i<s; i++)
    {
        if(str[i]==str[s-1])
        {
            f = true;
            int l,r;
            for(l=i+1,r=s-2; l<r ;l++,r--)
            {
                if(str[l]!=str[r])
                {
                    f = false;
                    break;
                }
            }
            if(f)
            {
                for(int j=i-1; j>=0; j--)
                    str+=str[j];
                break;
            }
        }
    }
    if(f)
        cout<<str<<endl;
    else
    {
        for(int j=s-2; j>=0; j--)
            str+=str[j];
        cout<<str<<endl;
    }
}



