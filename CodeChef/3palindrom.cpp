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
    int n;
    cin>>n;
    string s;
    for(long long int i = 0;i<200000/4;i++){
        s+="abba";
    }
    cout<<s.substr(0,n);
    return 0;
}