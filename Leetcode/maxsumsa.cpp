#include<bits/stdc++.h>
using namespace std;
 int maxSubArray(vector<int>& nums) {
        int best= INT_MIN;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum = max(nums[i],sum+nums[i]);
            best = max(sum,best);
        }
 return best;
 }

 int maxProduct(vector<int>& nums) {
    int best= INT_MIN;
        int prod_1 = 1;
        int prod_2 = 1;
        for(int i = 0;i<nums.size();i++){
            prod_1 = max(nums[i],prod_1*nums[i]);
            
            best = max(prod_1,best);
        }
 return best;
    }
int main(){
vector<int> vi = {};
printf("%d",maxProduct(vi));
}