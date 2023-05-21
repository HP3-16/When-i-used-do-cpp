#include<bits/stdc++.h>
using namespace std;
stack<int> ans;

void rec(stack<int>& st,int n,int curr,int prev){
    if(st.empty()){
        return;
    }

    else{
    if(prev!=curr){
        prev = curr;
        curr = st.top();
        ans.push(curr);
        st.pop();
        rec(st,n,curr,prev);
    }
    else{
        if(prev==curr)
            prev = st.top();
            st.pop();
            curr = st.top();
        rec(st,n,curr,prev);
    }
}
}

void remove_adj(stack<int>& st){
int n = st.size();
rec(st,n,st.top(),-1);
while(ans.empty()){
            cout<<ans.top();
            ans.pop();
        }
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(2);
    st.push(1);
    st.push(1);

remove_adj(st);
    
}