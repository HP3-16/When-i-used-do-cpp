#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}
vector<string> mirrorNum(int n,int m){
if(n==0)
    return {""};
if(n==1)
    return {"0","1","8"};
vector<string> temp = mirrorNum(n-2,m);
vector<string> ans;
for(string s:temp){
    if(n<m) 
        ans.push_back("0" + s + "0");
    ans.push_back("1" + s + "1");
    ans.push_back("6" + s + "9");
    ans.push_back("8" + s + "8");
    ans.push_back("9" + s + "6");
}

return ans;

}
int main(){
    file_i_o();
    int n;
    cin>>n;
    vector<string> ans = mirrorNum(n,n);
    for(string s: ans)
        cout<<s<<" "; 
}