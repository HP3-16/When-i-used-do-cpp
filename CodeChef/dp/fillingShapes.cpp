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
vector<ll> dp(61,0);
ll solve(int n){
dp[0] = 1;
for(int i=2;i<=n;i+=2){
    dp[i] = 2*dp[i-2];
}
return dp[n];
}

int main(){
    file_i_o();
    int n;
    cin>>n;
    cout<<solve(n);
}