#include<bits/stdc++.h>
using namespace std;

int main(){
    bitset<10> B_1;
    B_1[1] = 1;B_1[3] = 1;B_1[7] = 1;B_1[9] = 1;
    cout<<B_1<<endl;
    bitset<10> B_2(string("0011001100"));
    cout<<B_2<<endl;
    cout<<(B_1|B_2);
}  