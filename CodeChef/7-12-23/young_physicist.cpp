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
    int t;
    vector<int> out(3);
    cin>>t;
    while(t--){
       vector<int> V(3);
       for(int i = 0;i<3;i++){
        cin>>V[i];
       } 
    for(int i = 0;i<3;i++){
        out[i] += V[i];
    }
    }

    string ans = out == vector<int>(3,0)?"YES":"NO";

    cout<<ans;
return 0;
}