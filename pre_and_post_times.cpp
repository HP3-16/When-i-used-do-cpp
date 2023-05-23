/*
Pre visit and Post visit times
also known as - start & end times 
                    OR
                arrival & departure times
** Applications we can do topological sort based on departure time in decreasing order
*/
#include<bits/stdc++.h>
using namespace std;
class Graph{
    int m_v;
    int m_time;
    vector<vector<int>> m_adj;
    
    void DFS_rec(int s,vector<bool>& visited,vector<int>& pre, vector<int>& post){
    visited[s] = true;
    pre[s] = m_time++;
    cout<<s<<endl;
    for(int u:m_adj[s]){
        if(!visited[u])
            DFS_rec(u,visited,pre,post);
    }
    post[s] = m_time++;
    }
    public:
    //constructor
    Graph(int v):m_v(v),m_time(0),m_adj(v){}
    //addEdge function
    void addEdge(int u,int v){
        m_adj[u].push_back(v);
    }
    //DFS
    void DFS(int s){
        vector<bool> visited(m_v,false);
        vector<int> pre(m_v);
        vector<int> post(m_v);
        for(int i=0;i<m_v;i++)
            if(!visited[i])
                DFS_rec(i,visited,pre,post);
        
        for(int i=0;i<m_v;i++)
            cout<<i<<" : "<<pre[i]<<" : "<<post[i]<<endl;
        
    
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
