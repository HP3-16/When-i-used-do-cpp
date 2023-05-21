#include<bits/stdc++.h>
using namespace std;

vector<int> ans;
vector<vector<int>> res;
int n;
void backtrack(vector<int>& nums, int n, int idx){
    if(idx==n){
        res.push_back(ans);
        return;
    }
    else
    {
        ans.push_back(nums[idx]);
        backtrack(nums,n,idx+1);
        ans.pop_back();
        backtrack(nums,n,idx+1);
    }

}
vector<vector<int>> subsets(vector<int>& nums) {

backtrack(nums,n,0);
return res;
}

int main(){
vector<int> nums = {1,2,3};
n = nums.size();
res = subsets(nums);

 for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;

}
}