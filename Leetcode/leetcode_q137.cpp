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
int singleNumber(vector<int>& nums) {
unordered_map<int,int> mp;
for(int i = 0;i<nums.size();i++){
    mp[nums[i]]++;
}
int key = INT_MIN;
for(auto it = mp.begin();it!=mp.end();it++)
    if(it->second == 1)
        return it->first;
return 0;

}
int main(){
    file_i_o();
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<singleNumber(nums);
}