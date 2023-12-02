#include<bits/stdc++.h>
typedef long long ll;
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
int maxProfit(vector<int>& prices) {
        int max_sell = 0;
        int cur_min_before = INT_MAX;
        for(int sell_price : prices){
            int curr_max_sell = sell_price - cur_min_before;
            max_sell = max(max_sell,curr_max_sell);
            cur_min_before = min(cur_min_before,sell_price);
        }
    return max_sell;
    }
int main(){
    file_i_o();
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    cout<<maxProfit(nums);
}