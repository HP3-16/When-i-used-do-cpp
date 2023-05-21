#include<bits/stdc++.h>
using namespace std;

void insert_into_stack(stack<int>& rev,int ele){

    if(rev.empty() || rev.top() < ele){
        rev.push(ele);
        return;
    }
    
    int x = rev.top();
    rev.pop();
    insert_into_stack(rev,ele);
    rev.push(x);

}
void sort_stack(stack<int>& st){
    int x;
    if(!st.empty()){
        x = st.top();
        st.pop();
        sort_stack(st);
        insert_into_stack(st,x);
    }
}
int main(){
    stack<int> st;
    st.push(7);
    st.push(2);
    st.push(4);
    st.push(1);
sort_stack(st);
while(!st.empty()){
    cout<<st.top();
    st.pop();
}

}