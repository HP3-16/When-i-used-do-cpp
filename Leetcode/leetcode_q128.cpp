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
int longestConsecutive(vector<int>& nms){
    map<int,int> mp;
    // set<int> nms(nums.begin(),nums.end());
    int max_len = INT_MIN;
    for(int x : nms){ 
        mp.insert({x,0});
    }
    for(int x: nms){
        if(mp[x]!=1){
            int curr_max = 1;
            int val = x;
            while(mp.find(val-1)!=mp.end() && mp[val-1]!=1){
                val--;
                mp[val] = 1;
                curr_max++;
            }
            val = x;
            while(mp.find(val+1)!=mp.end() && mp[val+1]!=1){
                val++;
                mp[val] = 1;
                curr_max++;
            }

        max_len = max(curr_max,max_len);
        }
    }

    return max_len==INT_MIN?0:max_len;
}
int main(){
    file_i_o();
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    cout<<longestConsecutive(nums);

}