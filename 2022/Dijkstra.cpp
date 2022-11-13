#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int n, *dis,*par;
    vector<pair<int, int>> *adjList;
public:
    Graph(int n)
    {
        this->n = n;
        adjList = new vector<pair<int, int>>[n+1];
        dis = new int[n+1];
        par = new int[n+1];
    }
    ~Graph()
    {
        delete[] adjList;
        delete[] dis;
        delete[] par;
    }
    void addEdge(int u, int v, int w)
    {
        adjList[u].push_back(make_pair(v,w));
        adjList[v].push_back(make_pair(u,w));
    }
    void Dijkstra(int s, int d)
    {
        for(int i=0; i<=n; i++)
        {
            dis[i] = 10000000;
            par[i] = -1;
        }
        priority_queue< pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>> > pq;
        dis[s] = 0;
        pq.push(make_pair(0,s));
        while(!pq.empty())
        {
            int t = pq.top().second;
            pq.pop();
            for(int i=0; i<adjList[t].size(); i++)
            {
                if(dis[adjList[t][i].first]> dis[t] + adjList[t][i].second)
                {
                    dis[adjList[t][i].first] = dis[t] + adjList[t][i].second;
                    par[adjList[t][i].first] = t;
                    pq.push(make_pair(dis[adjList[t][i].first],adjList[t][i].first));
                }
            }
        }


        if(dis[d]==10000000)
        {
            cout<<"-1\n";
        }
        else
        {
            stack<int> st;
            st.push(d);
            while(par[d]!=-1)
            {
                st.push(par[d]);
                d = par[d];
            }
            while(!st.empty())
            {
                if(st.size()==1)
                    cout<<st.top()<<endl;
                else
                    cout<<st.top()<<" ";

                st.pop();
            }
        }
    }
};


int main()
{
    int n,m;
    cin>>n>>m;
    Graph g(n);
    while(m--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g.addEdge(u,v,w);
    }
    g.Dijkstra(1,n);
}


