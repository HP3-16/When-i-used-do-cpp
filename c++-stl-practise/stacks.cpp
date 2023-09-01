#include<bits/stdc++.h>
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> st;
    for(int i=0;i<5;i++){
        int val;
        cin>>val;
        st.push(val);  //O(1)
    }

    cout<<endl;
    cout<<"The stack is \n";
    while(!st.empty()){
        cout<<st.top()<<"->";
        st.pop(); //O(1)
    }


}