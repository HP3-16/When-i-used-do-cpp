#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> d{1,2,3,4,5};
    d.push_back(10);
    for(int val:d)
        cout<<val<<" ";
    cout<<endl;
    d.pop_back();
    for(int val:d)
        cout<<val<<" ";
    cout<<endl;
    d.insert(d.begin()+1,77);
    for(int val:d)
        cout<<val<<" ";
    cout<<endl;

    vector<int> v{10,20,30,40,50};
    v.insert(v.begin()+3,2,100);
    for(int vi:v)
        cout<<vi<<" ";
    cout<<endl;
    
    v.erase(v.begin()+3,v.begin()+5); //excludes 5th idx element
    for(int vi:v)
        cout<<vi<<" ";
    cout<<endl;


    // Reserving memory
    int n;
    cin>>n;
    vector<int> X;
    X.reserve(50);
    for(int i=0;i<n;i++){
        int vi;
        cin>>vi;
        X.push_back(vi);
        cout<<"capacity at instant "<<(i+1)<<" is "<<X.capacity()<<endl;
    }

}