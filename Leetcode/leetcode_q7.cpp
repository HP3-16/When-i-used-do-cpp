#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
int rev=0;
while(x){
    int remainder = x%10;
    rev = rev*10 + remainder;
    x = x/10;
}
if(rev>INT_MAX || rev<INT_MIN)
    rev= 0;

return rev;

}
 int main(){
cout<<reverse(1534236469);
 }