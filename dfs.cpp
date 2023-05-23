/*
DFS using both recursive & iterative approaches
*/

#include<bits/stdc++.h>
using namespace std;
class Graph{
    // private variables
    int m_v;
    vector<vector<int>> m_adj;
    //DFS_ is the recursive function
    void DFS_(int s,vector<bool>& visited){
        visited[s] = true;
        cout<<s<<endl;
        for(int u:m_adj[s]){
            if(!visited[u])
                DFS_(u,visited);
        }   
    }
    //DFS_iter is an iterative function
    void DFS_iter(int s,vector<bool>& visited){
    stack<int> S;
    S.push(s);
    visited[s] = true;
    while(!S.empty()){
        int u = S.top();
        S.pop();
        cout<<u<<" ";
        for(int v:m_adj[u]){
            if(!visited[v]){
                S.push(v);
                visited[v] = true;}
        }
    }
}
public:
//constructor
Graph(int v):m_v(v),m_adj(v){}
//addEdge function
void addEdge(int u,int v){
    m_adj[u].push_back(v);
     /*
    in case of undirected we'll add it twice
    m_adj[v].push_back(u);
    */
}

void DFS(int s){
vector<bool> visited(m_v,false);
//this for loop makes sure that all edges are visited atleast once
for(int i = 0;i<m_v;i++)
   if(!visited[i])
    DFS_iter(i,visited);
}

};
int main(){
    Graph G(5);
    G.addEdge(0,1);
    G.addEdge(0,3);
    G.addEdge(1,2);
    G.addEdge(3,2);
    G.addEdge(3,4);

    G.DFS(0);
    return 0;
}