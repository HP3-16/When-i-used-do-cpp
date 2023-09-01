#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<list>
using namespace std;

int main(){
    // List in stl is doubly ll
    // useful in insertion and deletion from front and middle
    list<int>l1{10,20,30,40,50};
    list<string> ls{"apple","mango","kiwi"};
    ls.push_back("pineapple");
    for(string si:ls)
        cout<<si<<"-->";
    cout<<endl;
    l1.sort();
    for(int li:l1)
        cout<<li<<",";
    cout<<endl;
    
    
    
    cout<<ls.front()<<endl;
    
    
    ls.pop_front();
    for(string si:ls)
        cout<<si<<"-->";
    cout<<endl;
    ls.push_front("dragonfruit");
    
    
    //df -> mango -> kiwi -> pineapple
    auto it = ls.begin();
    it++;
    it++;
    ls.erase(it);
    for(string si:ls)
        cout<<si<<"-->";
    cout<<endl;

    it = ls.begin();
    it++;

    ls.insert(it,"papaya");

    for(string s:ls)
        cout<<s<<"-->";
    cout<<endl;





}