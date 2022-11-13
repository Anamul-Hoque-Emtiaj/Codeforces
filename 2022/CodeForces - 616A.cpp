#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int l = 0, m = 0;
    for(int i=0; i<str1.size(); i++)
    {
        if(str1[i]!='0')
            break;
        l++;
    }
    for(int i=0; i<str2.size(); i++)
    {
        if(str2[i]!='0')
            break;
        m++;
    }
    int s1 = str1.size() - l;
    int s2 = str2.size() - m;
    if(s1!=s2)
    {
        if(s1>s2)
            cout<<">\n";
        else
            cout<<"<\n";
    }
    else
    {
        bool eql=true, grtr = false;
        for(int i=0; i<s1; i++)
        {
            if(str1[l+i]!=str2[m+i])
            {
                eql = false;
                if(str1[l+i]>str2[m+i])
                    grtr = true;
                break;
            }
        }
        if(eql)
            cout<<"=\n";
        else if(grtr)
             cout<<">\n";
        else
            cout<<"<\n";
    }
}





