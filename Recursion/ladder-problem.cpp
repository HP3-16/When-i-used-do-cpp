#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// a jump can be of 1/2/3 steps
// no of ways to climb stairs of n steps
int ladder(int n, int k){
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    
    int ans = 0;
    for(int i=1;i<=k;i++)
        ans += ladder(n-i,k);

return ans;
        
}
int main(){
 int n=4;
 int k=3;
 cout<<ladder(n,k); 
}