#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int noOfWays(int n){

    if(n<=3)
        return 1;
    // if(n == 4);
    //     return 2;

    int start_with_1 = noOfWays(n-1);
    int start_with_4 = noOfWays(n-4);

    return start_with_1+start_with_4;
}
int main(){
    // #of ways to arrange a 4xN wall with bricks of 4x1 and 1x4
    int n = 5;
    cout<<noOfWays(5);
}
