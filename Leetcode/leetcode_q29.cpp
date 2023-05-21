#include<bits/stdc++.h>
using namespace std;
int divide(int dividend, int divisor) {
        int ans = dividend/divisor;
        if(ans<INT_MIN)
            return INT_MIN;
        if(ans>INT_MAX)
            return INT_MAX;
        return ans;
    }
int main(){

    cout<<divide(1000,7);

}