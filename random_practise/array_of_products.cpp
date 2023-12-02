/*
238. Product of Array Except Self

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
 

Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

*/
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
vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        vector<int> left_products(nums.size(),1);
        vector<int> right_products(nums.size(),1);
        ll lrp = 1;
        ll rrp = 1;
        for(int i = 1;i<nums.size();i++){
            lrp*=nums[i-1];
            left_products[i] = lrp;
        }

        for(int i = nums.size()-2;i>=0;i--){
            rrp*=nums[i+1];
            right_products[i] = rrp;
        }

        for(int i=0;i<nums.size();i++){
            res[i] = left_products[i]*right_products[i];
        }

        return res;
}

int main(){
    file_i_o();
    int n;
    cin>>n;
    vector<int> V(n);
    for(int i = 0;i<n;i++)
        cin>>V[i];
    
    vector<int> res = productExceptSelf(V);

    for(int ele: res)
        cout<<ele<<" ";
    
    return 0;
}