#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;
class Graph
{
    int V;
    list<int> *l;
    public:
    Graph(int v)
    {
        this->V=v;
        l=new list<int> [v];
    }

    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print() {
        for(int i = 0; i < V; i++) {
            cout << i << ": ";
            for(int j : l[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    void dfshelper(int u, vector<bool> &vis)
    {
        cout<<u<<" ";
        vis[u]=true;
        for(int v: l[u])
        {
            if(!vis[v])
            dfshelper(v, vis);
        }
    }

    void dfs(int x)
    {
        int src=x;
        vector<bool>vis(V, false);
        dfshelper(src, vis);
        cout<<endl;
    }
    
    void bfs(int x)
    {
        queue<int> q;
        vector<bool> vis(V, false);
        q.push(x);
        vis[x]=true;
    
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            cout<<u<<" ";
            for(int v: l[u])
            {
                if(!vis[v])
                {
                    vis[v]=true;
                    q.push(v);
                }
            }

        }
        cout<<endl;
    }

    void connected(int n)
    {
        vector<bool> vis(n, false);
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(!vis[i]){
            
                bfs[i];
                count++;
            }
        }
        cout<<"connected components: "<<count<<endl;
    }

};
int main()
{
    Graph g(10);

    g.addEdge(1,2);
    g.addEdge(3,1);
    g.addEdge(4,3);
    g.addEdge(2,4);
    g.addEdge(5,6);
    g.addEdge(6,7);
    g.addEdge(7,5);
    g.addEdge(8,9);
    

    g.print();
    cout<<"dfs : ";
    g.dfs(2);
    cout<<"bfs: ";
    g.bfs(1);

    g.connected(10);
}