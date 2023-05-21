#include<bits/stdc++.h>
using namespace std;
int fact[100];

int factorial(int n){
fact[0]=1;
fact[1]=1;

if(n>1){

    for(int i =2;i<=n;i++)
        fact[i] = i*fact[i-1];

} 
return fact[n];
}
int main(){
    cout<<factorial(7);
}
