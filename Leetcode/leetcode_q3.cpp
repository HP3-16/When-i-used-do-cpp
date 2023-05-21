#include<bits/stdc++.h>
using namespace std;
int MAX;
int backtrack(int idx,string str,unordered_set<char> &S,int max,int count){
for(int i=idx;i<str.size();i++)
if(idx == str.size()-1)
    { for(auto ele = S.begin();ele!=S.end();ele++)
        cout<<*ele;
        return max;
       
    }
else{
    if(S.count(str[i]))
        {count=1;
        continue;
         }
    else{    
    count++;
    if(count>max)
            max = count;
         return backtrack(idx+1,str,S,max,count);
    }}

}








int lengthOfLongestSubstring(string s) {

unordered_set<char> S;
int val = backtrack(0,s,S,0,0);

return val;

    }
int main(){
string s = "abcabc";
cout<<lengthOfLongestSubstring(s);
}