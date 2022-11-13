#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=-1;
    cin>>n;
    vector<int> adjList[n+1];
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        if(s=-1)
            s = u;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int level[n+1];
    memset(level,-1,sizeof(level));
    queue<int>q;
    q.push(s);
    level[s] = 0;
    while(!q.empty())
    {
        int t = q.front();
        q.pop();
        for(int i=0; i<adjList[t].size(); i++)
        {
            int f = adjList[t][i];
            if(level[f]==-1)
            {
                level[f] = level[t] + 1;
                q.push(f);
            }
        }
    }
    long long int c=0;
    for(int i=0; i<=n; i++)
    {
        if(level[i]!=-1 && level[i]%2==0)
            c++;
    }
    long long int r=0;
    for(int i=0; i<=n; i++)
    {
        if(level[i]!=-1 && level[i]%2==1)
        {
            r+=(c-adjList[i].size());
        }
    }
    cout<<r<<endl;
}



