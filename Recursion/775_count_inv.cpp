#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int>temp;
long long localInversions(vector<int>& nums){
long long count = 0;
for(int i = 0;i<nums.size()-1;i++){
    if(nums[i]>nums[i+1])
        count+=1;
}
return count;

}

long long merge(vector<int>& nums, int s, int e){
temp.clear();
long long count = 0;
int mid = s+(e-s)/2;
int i = s;
int j = mid+1;
//int k = s;

while(i<=mid && j<=e){
    if(nums[i]<=nums[j]){
        temp.push_back(nums[i++]);
        //k++;
    }
    else{
        //count
        temp.push_back(nums[j++]);
        //k++;
        count = count + (mid-i+1);
    }
}

while(i<=mid){
    temp.push_back(nums[i++]);
        //k++;
    }
while(j<=e){
    temp.push_back(nums[j++]);
        //k++;
}

for(int i = s;i<=e;i++){
    nums[i] = temp[i-s];
}

return count;

}

long long globalInversions(vector<int>& nums,int start,int end)
{
    if(start>=end)
        return 0;

    int mid = (start+end)/2;
    long long c1 = globalInversions(nums,start,mid);
    long long c2 = globalInversions(nums,mid+1,end);
    long long c3 = merge(nums,start,end);

    return c1+c2+c3;


}

bool isIdealPermutation(vector<int>& nums) {
        int size = nums.size();
        long long c1 = localInversions(nums);
        long long c2 = globalInversions(nums,0,size-1);
        return (c2==c1);
}
int main(){

vector<int> nums{0,2,3,1};
int size = nums.size();
cout<<localInversions(nums);
cout<<globalInversions(nums,0,size-1);
}