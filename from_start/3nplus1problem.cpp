#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}
ll max_cycle_length(int x){
    ll count = 0;
    while(x!=1){
        if(x%2 == 0)
            x/=2;
        else    
            x = x*3 + 1;
        count ++;
    }
    count = count+1;
    return count;
}
int main(){
    file_i_o();
    int i,j;
    cin>>i>>j;
    int best_count = 0;
    for(int a = i;a<=j;a++){
        int count = max_cycle_length(a);
        best_count = max(count,best_count);
    }
    cout<<i<<" "<<j<<" "<<best_count;
}
