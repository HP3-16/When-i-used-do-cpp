#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<string> ans;

void subset_gen(string str,int i, string curr){
    if(str[i]=='\0'){
        ans.push_back(curr);
        return;
        }
    
    subset_gen(str,i+1,curr+str[i]);
    subset_gen(str,i+1,curr);

}

int main(){
    string str = "abc";
    subset_gen(str,0,"");
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";


}