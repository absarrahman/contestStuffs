#include <bits/stdc++.h>
#define INF 200010
using namespace std;

int parent[INF];
int nodes,edges,totalSum;
struct Edge{
    int u,v,w;
};

bool compare(Edge u,Edge v){
    return u.w<v.w;
}

int searchP(int p){
    if(parent[p]<0){
        return p;
    }
    parent[p] = searchP(parent[p]);//search till main parent
    return parent[p];
}

void setU(int u,int v){ //union set
    u = searchP(u);
    v = searchP(v);

    if(u!=v){ //shoman na hoile swap kore add korbe
        if(parent[v]<parent[u]){
            swap(u,v);
        }
    }
    parent[u]+=parent[v];
    parent[v] = u; //v er parent u hobe

}

void kruskal(vector<Edge> vE){
    sort(vE.begin(),vE.end(),compare);
    for(int i = 0;i<edges;i++){
        Edge edge = vE[i];
        if(searchP(edge.u)!=searchP(edge.v)){
            totalSum += edge.w;
            setU(edge.u,edge.v);
        }
    }
}

int main(){
    while(cin>>nodes>>edges,nodes||edges)
    {
        memset(parent,-1,sizeof(parent));

        totalSum=0; //mst
        int costSum(0);
        vector<Edge> vE(edges);

        for (int i = 0, u, v, w; i < edges; i++)
        {
            cin>>u>>v>>w;
            vE[i].u = u;
            vE[i].v = v;
            vE[i].w = w;
            costSum+=w;
        }
        kruskal(vE);
       // cout<<costSum<<"cost"<<endl;
        cout<<((costSum-totalSum))<<endl;
    }
}
