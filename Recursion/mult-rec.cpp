#include<bits/stdc++.h>
#include<iostream>
#define ll long long
using namespace std;
// 2 * 3
// 2 +mult(2,2) = 2 + 2 +mult(2,1) 
ll mult(ll x, ll y){
if(y==1)
    return x;

return x + mult(x,y-1); 

}
int main(){
    ll x,y;
    cin>>x>>y;
    cout<<mult(x,y);
}