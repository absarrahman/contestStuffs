#include <bits/stdc++.h>

using namespace std;

int totalSum;

const int MX = 200010;

struct edge {
	int u, v, w;
	bool operator < (const edge& p) const {
		return w < p.w;
	}
};

vector <edge> g;
int parent[MX];
int nodes, edges;

inline int find(int r) {
	return (parent[r] == r) ? r : find(parent[r]);
}

inline void kruskal_mst() {
	sort(g.begin(), g.end());
	for (int i = 0; i < nodes; i++) parent[i] = i;
	int cnt = 0, tcost = 0, u, v, w;
	for (int i = 0; i < edges; i++) { // edges = g.size()
		u = find(g[i].u);
		v = find(g[i].v);
		if (u != v) {
			//cout << g[i].u << " - " << g[i].v << " " << g[i].w << "\n";
			parent[u] = v;
			cnt++;
			tcost += g[i].w;
			if (cnt == nodes-1) break;
		}
	}
	totalSum = tcost;
}

void clearArr(){
    for(int i=0;i<=nodes;i++){
        parent[i]=0;
    }
}


int main()
{
    while(cin>>nodes>>edges,nodes||edges)
    {

        totalSum=0; //mst
        int costSum(0);

        for (int i = 0, u, v, w; i < edges; i++)
        {
            cin>>u>>v>>w;
            edge eg;
            eg.u = u;
            eg.v = v;
            eg.w = w;
            g.push_back(eg);
            costSum+=w;
        }
        kruskal_mst();
        //cout<<costSum<<"cost"<<endl;
        cout<<(costSum-totalSum)<<"\n";
        clearArr();
        g.clear();
    }
    return 0;
}
