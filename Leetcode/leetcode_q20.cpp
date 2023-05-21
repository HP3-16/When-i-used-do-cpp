#include<bits/stdc++.h>
using namespace std;
 bool isValid(string s) {
    stack<int> st;

    if(s.length()%2==1)
        return false;

    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {st.push(s[i]);}
        else
        {
        if(st.empty())
            return false;
        if( (s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='['))
            st.pop();
        else    
            return false;
            
    }
    }
    return st.empty();
    }
int main(){
string s = "([}}])";
string ans = (isValid(s))?"Yes":"No";
cout<<ans;
}