#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {

int XOR=0;
for(auto num : nums)
    XOR = (XOR^num);

return XOR;
    }
int main(){

    vector<int> nums = {2,2,1};
    int ans = singleNumber(nums);
    cout<<ans;

}