#include<iostream>
#include<list>
#include<vector>
using namespace std;
class graph
{
    public: 
    int v;
    list<int> *l;

    graph(int u)
    {
        this->v=u;
        l=new list<pair <int, int> >[v];
    }

    void addEdge(int v, int u, int w)
{
    l[v].push_back({u,w});
    l[u].push_back({v,w});
}

void dijkstra(int src=0)
{
    vector<int> dist(v,1e9);
    vector<bool> vis(v, false);

    dist[src]=0;
    for(int i=0; i<v-1; i++)
    {
        int u=-1;
        int min= 1e9;
        for(int j=0; j<v; j++)
        {
            if(!vis[j] && dist[j]<min)
            {
                min=dist[j];
                u=j;
            }
        }

        vis[u]=true;
        for(auto &x : l[u])
        {
            int v= x.first;
            int w= x.second;

            if(!visited[v] && dist[u]+w < dist[v])
            {
                dist[v]=dist[u]+w;
            }
        }
    }

    
    
        cout<<dist[src];
    
}

};

int main()
{
    graph g(3);
    


}

