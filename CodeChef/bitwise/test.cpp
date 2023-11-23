#include<bits/stdc++.h>
using namespace std;
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}
int main(){
    file_i_o();
    // int x;
    // cin>>x;
    // cout<<__builtin_popcount(x)<<endl;
    // cout<<__builtin_ctz(x)<<endl;
    // cout<<__builtin_clz(x)<<endl;
    
    int y;
    cin>>y;
    /*Finding the highest bit in a number input 64*/
    cout<<"Highest Bit"<<endl;
    cout<<__builtin_clz(y)<<"- highest-bit - "<<__builtin_ctz(y)<<endl;
    int highest_bit = (32 - __builtin_clz(y) -1);
    cout<<highest_bit<<endl;
    cout<<"\n";
    //Modulo input 5
    cout<<"Modulo"<<endl;
    int z;
    cin>>z;

    cout<<z%4<<endl;
    cout<<(z&3)<<endl;

    cout<<"\n";

    /*Kth bit input 108*/
    cout<<"Kth Bit"<<endl;
    int a,k;
    cin>>a>>k;
    cout<<((a>>k)&1);

    cout<<endl;
    cout<<"Addition"<<endl;

    int c,d;
    cin>>c>>d;
    cout<<c+d<<endl;
    cout<<(c^d) + 2*(c&d)<<endl;


}