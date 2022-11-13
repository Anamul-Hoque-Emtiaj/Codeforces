#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ifstream input;
    input.open("max-pair.in");
    input>>t;
    while(t--)
    {
        string str;
        input>>str;
        int s = str.size();
        if(str[0]==str[s-1])
            cout<<s-2<<"\n";
        else
            cout<<s-1<<"\n";
    }
    input.close();
}





