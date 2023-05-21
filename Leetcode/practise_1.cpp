#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    for(int i=1;i<10;i++)
        dq.push_back(i);
    
    cout<<dq.front();
}