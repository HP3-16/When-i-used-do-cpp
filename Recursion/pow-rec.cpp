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
int main(){
    ll a,b;
    cin>>a>>b;
    cout<<power_fn(a,b);
}