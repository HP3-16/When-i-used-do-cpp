#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    map<string,int> market;
    market.insert(make_pair("mango",100));

    for(int i=0;i<5;i++){
        pair<string,int> p;
        string s;
        int pr;
        cin>>s>>pr;
        p.first = s;
        p.second = pr;
        market.insert(p);
    }
    cout<<endl;
    //search
    string fruit;
    cin>>fruit;

    auto it = market.find(fruit);
    if(it!=market.end())
        cout<<fruit<<" costs "<<market[fruit]<<endl;
    else
        cout<<"Fruit not found"<<endl;

    //erase
    // market.erase(fruit);

    for(auto it = market.begin();it!=market.end();it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }
}