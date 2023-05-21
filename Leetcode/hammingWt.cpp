#include<bits/stdc++.h>
using namespace std;
typedef uint32_t u32;
int hammingWeight(u32 n){
    int count=0;
    while(n){
        count+=(n%2);
        n/=2;
    }
    return count;
}
int main(){
    u32 n = 00000000000000000000000001001011;
    cout<<hammingWeight(n);


}