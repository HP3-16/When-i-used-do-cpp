#include<bits/stdc++.h>
using namespace std;
class Graph{
//private variables
int m_v;
vector<vector<int>> m_adj;

public:
//constructor
Graph(int v): m_v(v),m_adj(v){}

void addEdge(int u,int v){
    m_adj[u].push_back(v);
    /*
    in case of undirected we'll add it twice
    m_adj[v].push_back(u);
    */
}
void BFS(int s){
    queue<int> Q;
    vector<bool> visited(m_v,false);
    Q.push(s);
    visited[s] = true;

    while(!Q.empty()){
        int v = Q.front();
        Q.pop();
        printf("%d ",v);
        for(int neighbour:m_adj[v]){
            if(!visited[neighbour]){
                Q.push(neighbour);
                visited[neighbour] = true;
            }
        printf("\n");
                }
    }

}

void bfs(int s){
    queue<int> Q;
    vector<bool> visited(m_v,false);

    Q.push(s);
    visited[s] = true;

    while(!Q.empty()){
        int v = Q.front();
        Q.pop();
        cout<<v<<endl;

        for(int u:m_adj[v]){
            if(!visited[u]){
                Q.push(u);
                visited[u] = true;
            }

        }
    }
}
};


int main(){
    Graph G(5);
    G.addEdge(0,1);
    G.addEdge(0,3);
    G.addEdge(1,2);
    G.addEdge(3,2);
    G.addEdge(3,4);

G.bfs(0);
    return 0;
}