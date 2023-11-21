#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
// void file_i_o(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt","r",stdin);
//         freopen("output.txt","w",stdout);
//     #endif
// }
/*
format;
tc
[inp_size max_amt
_ _ _ ] x tc
Input:

*/
int main(){
// file_i_o();
int tc;
cin>>tc;
while(tc--){
    int n,x;
    cin>>n>>x;
    vector<ll> arr(n);
    map<ll,vector<ll> > mp;
    
    for(ll i = 0;i<n;i++){
        cin>>arr[i];
        mp[(arr[i]+x-1)/x].push_back(i+1);
    }
    cout<<"Case #"<<(tc+1)<<": ";
    for(pair<ll,vector<ll>> p : mp ){
        for (ll val:p.second){
            cout<<val<<" ";
        }
    }
    cout<<endl;
}
}