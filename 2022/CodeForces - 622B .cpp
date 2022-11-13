#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int t;
    cin>>t;
    int hh = stoi(str.substr(0,2));
    int mm = stoi(str.substr(3,2));
    mm+=t;
    hh=(hh+(mm/60))%24;
    mm = mm%60;
    cout <<setw(2) <<setfill('0')<<hh<<":"<<setw(2) <<setfill('0')<<mm<<endl;
}




