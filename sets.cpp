#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> S;
    S.insert(1);
    S.insert(5);
    S.insert(-2);
    S.insert(5);
    S.insert(7);
    S.insert(10);
    S.insert(7);

for(auto x :S){
    cout<<x<<" ";
}    
cout<<"\n";

set<int>::iterator it = S.begin();
while(it!=S.end())
    {printf("%d ",*it);it++;}
}