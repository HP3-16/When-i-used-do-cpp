#include<bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int> nums, int target){
vector<int> ans;

if(nums.size()==0 || target<*nums.begin() || target>nums.back()){
    return vector<int> {-1,-1};
}

int size = sizeof(nums)/sizeof(nums[0]);
auto ptr = lower_bound(nums.begin(),nums.end(),target);
auto ptr2 = upper_bound(nums.begin(),nums.end(),target);

int first = ptr - nums.begin();
int last = ptr - nums.begin();

if(*ptr == target)
{
ans.push_back(ptr-nums.begin());
ans.push_back(ptr2-nums.begin()-1);
}
else
    ans = {-1,-1};

return ans;

}
int main(){
    int x = 7;
vector<int> v = {5,7,7,8,8,10};
vector<int> ans = searchRange(v,x);
for(auto ele:ans)
printf("%d ",ele);
// printf("%d",v.back());

}