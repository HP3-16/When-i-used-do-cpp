#include<bits/stdc++.h>
using namespace std;
 int searchInsert(vector<int>& nums, int target) {
        int ans = -1;
        int size = nums.size();
        if(target<=*nums.begin())
            ans=0;
        else if(target>nums.back())
            ans = size;
        else{
        auto k = lower_bound(nums.begin(),nums.begin()+size,target);

        int ele = *k;

        if(target==ele || target< ele)
            ans = (k-nums.begin());
        else 
            ans = (k-nums.begin())+1;
        }

    return ans;

    }
int main(){
vector<int> nums = {1,3,5,6};
int target = 2;
printf("%d",searchInsert(nums,target));   
}