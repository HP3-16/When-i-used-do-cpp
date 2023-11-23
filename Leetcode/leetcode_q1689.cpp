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
int minPartitions(string n){
int res = 0;
for(char c : n){
    res = max(c-'0',res);

return res;
}
}
int main(){
file_i_o();
string s;
cin>>s;
cout<<minPartitions(s);
}