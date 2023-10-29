#include<bits/stdc++.h>
#include<string>
using namespace std;

void genbrackets(int N, int c_o,int c_c, int i, string current){
if(i==2*N)
    cout<<current<<"\n";

if(c_o>0)
        genbrackets(N,c_o-1,c_c,i+1,current+'(');
if(c_o<c_c)
        genbrackets(N,c_o,c_c-1,i+1,current+')');
}
int main(){
string out = "";
genbrackets(3,3,3,0,out);
}