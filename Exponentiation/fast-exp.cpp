#include<bits/stdc++.h>
#include<iostream>
using namespace std;


// Compute a^n quicker
//a^n = a * (a^(n/2))^2 if n is odd
//a^n = (a^(n/2))^2 if n is even
// 5^11 = 5 * (5^5)^2
//              5 * (5^2)^2
//                   (5^1)^2



int power(int x, int n){
    if(n==0)
        return 1;
    int subproblem = pow(x,n/2);
    if(n&1) // odd
        return x*subproblem*subproblem;
    else
        return  subproblem*subproblem;
}
int main(){

    int x=5;
    int n=6;

    cout<<power(x,n);

    return 0;

}