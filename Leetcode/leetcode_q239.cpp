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
vector<int> maxSlidingWindow(vector<int> nums, int k){
    vector<int> ans;
    multiset<int> s;
    int left = 0,right = 0,best = INT_MIN;
    int counter = 0;
    while(right<nums.size()){
        s.insert(nums[right]);
        best = *s.rbegin();
        counter++;
        right++;
        if(counter == k){
        // cout<<best<<" ";
        ans.push_back(best);
        int del_ele = nums[left];
        s.erase(s.find(del_ele));
        left++;
        counter--;
        }
        }
    return ans;
    }
int main(){
    file_i_o();
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i = 0;i< n;i++){
        cin>>nums[i];
    }
    for (int ele : maxSlidingWindow(nums,k))
        cout<<ele<<" ";
}