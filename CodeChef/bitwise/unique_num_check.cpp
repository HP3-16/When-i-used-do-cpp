#include<bits/stdc++.h>
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
    vector<int> V {2,2,2,3,2,2};
    int x = V[0];
    for(int i = 1;i<V.size();i++){
        x ^= V[i];
        cout<<x<<" ";
    }
    }