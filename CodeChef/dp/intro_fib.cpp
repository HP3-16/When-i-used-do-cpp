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
vector<ll> cache (50,-1);
ll fib_rec(int n){
    if(n<2)
        return n;
    return fib_rec(n-1)+fib_rec(n-2);
}
ll fib_dp(int n){
    /*
    Memoization
    */
    if(n<2)
        return n;
    if(cache[n]!=-1)
        return cache[n];
    cache[n] = fib_dp(n-1)+fib_dp(n-2);
    return cache[n];
}
ll fib_dp_1(int n){
    cache[0] = 0;
    cache[1] = 1;
    for(int i = 2;i<=n;i++){
    cache[i] = cache[i-1]+cache[i-2];
    }
    return cache[n];
}
vector<ll> f(100,0);
ll push_dp_fib(int n){
    f[0] = 0;
    f[1] = 1;
    for(int i = 1;i<n;i++){
        f[i+1] += f[i];
        f[i+2] += f[i];
    }
    return f[n];
}
int main(){
    file_i_o();
    int n;
    cin>>n;
    cout<<push_dp_fib(n)<<endl;
    return 0;

}
