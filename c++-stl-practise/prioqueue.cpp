#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq; //by default max_heap
    for(int i=0;i<5;i++){
        int val;
        cin>>val;
        pq.push(val);
    }
    cout<<endl;
    cout<<"The priority queue is : \n";
    while (!pq.empty())
    {
        cout<<pq.top()<<"->";
        pq.pop();
    }

    priority_queue<int,vector<int>,greater<int>> min_pq;
    for(int i=0;i<5;i++){
        int val;
        cin>>val;
        min_pq.push(val);
    }
    cout<<endl;
    cout<<"The priority queue is : \n";
    while (!min_pq.empty())
    {
        cout<<min_pq.top()<<"->";
        min_pq.pop();
    }
    
}