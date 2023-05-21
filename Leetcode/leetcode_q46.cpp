#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> final_permutations;vector<int> permutations;
unordered_set<vector<int>> perm_set;
void backtrack(int idx, vector<int> nums,vector<int> permutations,vector<bool> chosen){
    if(permutations.size() == n){
        
            final_permutations.push_back(permutations);
        return;
    }
    else
    {
        for(int i =0;i<n;i++){
            if(chosen[i])
                continue;
            chosen[i] = true;
            permutations.push_back(nums[i]);
            backtrack(idx+1,nums,permutations,chosen);
            chosen[i] = false;
            permutations.pop_back();
        }
    }
}


vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> chosen(n,bool(false));
        backtrack(0,nums,permutations,chosen);
    return final_permutations;
    }

int main(){
vector<int> nums = {1,1,2};
n = nums.size();
vector<vector<int>> sol = permute(nums);
for (int i = 0; i < sol.size(); i++) {
        for (int j = 0; j < sol[i].size(); j++)
            cout << sol[i][j] << " ";
        cout << endl;
    }
}