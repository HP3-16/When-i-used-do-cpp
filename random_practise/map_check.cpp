#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}
int main(){
    file_i_o();
    map<char,int> mp;
    string t = "ABBBCDEFF";
    for(int i = 0;i<t.length();i++){
        if(mp.find(t[i]) == mp.end())
            mp.insert(make_pair(t[i],1));
        else
            mp[t[i]]++;
    }

    for(auto it:mp)
        cout<<it.first<<" - "<<it.second<<endl;

    cout<<mp['F'];

}