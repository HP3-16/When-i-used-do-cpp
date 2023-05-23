#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int V = 5; //vertices are 0(A), 1(B), 2(C), 3(D), 4(E)
vector<vector<int>> adj(V);
adj[0].push_back(1);
adj[0].push_back(3);

adj[1].push_back(2);

adj[3].push_back(2);
adj[3].push_back(4);
    
/*
adj = {{1,3}
        {2}
        {}
        {2,4}
        {}
       }


*/


//print neighbours of D 3
cout<<"The neighbors of D are : ";
for(int v:adj[3])
    printf("%c ",v+'A');

    return 0;
}