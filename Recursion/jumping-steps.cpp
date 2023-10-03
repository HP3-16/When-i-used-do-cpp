#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int numJumps(int n){
if(n<0)
    return 0;
if(n<=2)
    return n;

return numJumps(n-1) + numJumps(n-2)+numJumps(n-3);
    }
int main(){
cout<<numJumps(4);
}