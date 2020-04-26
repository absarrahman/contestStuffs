#include <bits/stdc++.h>
# define INF 200001
#define ll long long int
using namespace std;

typedef pair<int, int> iPair;

ll totalSum;

class Graph
{
    int V;
    list< pair<int, int> > *adj;

public:
    Graph(int V);


    void addEdge(int u, int v, int w);

    void primMST();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<iPair> [V];
}

void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}


void Graph::primMST()
{
    priority_queue< iPair, vector <iPair>, greater<iPair> > pq;

    int src = 0;

    vector<int> key(V, INF);

    vector<int> parent(V, -1);


    vector<bool> inMST(V, false);

    pq.push(make_pair(0, src));
    key[src] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        inMST[u] = true;

        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {

            int v = (*i).first;
            int weight = (*i).second;

            if (inMST[v] == false && key[v] > weight)
            {
                key[v] = weight;
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }

    for (int i = 1; i < V; ++i)
        totalSum+=key[i];
}


int main()
{
    int nodes,edges;
    while(cin>>nodes>>edges,nodes||edges)
    {

        Graph g(nodes);

        totalSum=0; //mst
        ll costSum(0);

        for (int i = 0, u, v, w; i < edges; i++)
        {
            cin>>u>>v>>w;
            g.addEdge(u, v, w);
            costSum+=w;
        }
        g.primMST();
        cout<<costSum<<"cost"<<endl;
        cout<<((costSum-totalSum))<<endl;
    }
    return 0;
}
