#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
queue<int> q;
for(int i=0;i<5;i++){
    int val;
    cin>>val;
    q.push(val);
}
cout<<endl;
cout<<"The queue is :\n";
while(!q.empty()){
    cout<<q.front()<<"->";
    q.pop();
}
}