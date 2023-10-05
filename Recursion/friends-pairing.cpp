#include<iostream>
#include<bits/stdc++.h>
#define ll long long;
using namespace std;
int fact(int n){
    if(n==0 || n==1)
        return 1;
    int ans = 1;
    for(int i=2;i<=n;i++)
        ans*=i;
    
    return ans;
}
ll int ncr(int n,int r){
return fact(n)/(fact(r)*fact(n-r));
}

int friends_perm(int n){
if(n==0 || n==1)
    return 1; 

return 1*friends_perm(n-1) + ncr(n-1,1)*friends_perm(n-2);
}
int main(){
    cout<<friends_perm(3);

}