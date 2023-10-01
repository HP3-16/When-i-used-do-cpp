#include<bits/stdc++.h>
#include<iostream>
#define ll long long

using namespace std;
ll power_fn(ll x,ll n){
    if(n==0)
        return 1;
    ll small_ans = x*power_fn(x,n-1);

    return small_ans;
}
ll fast_power(ll x, ll y){ // O(log N)
    if(y==0)
        return 1;
    
    ll sub_problem = fast_power(x,(y/2));
    sub_problem*=sub_problem;
    
    if(x&1)
        return sub_problem*x;
    return sub_problem;

}
int main(){
    ll a,b;
    cin>>a>>b;
    cout<<power_fn(a,b);
}