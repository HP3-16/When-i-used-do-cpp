#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}
int search_(vector<int>& nums, int start, int end, int target){
    while(start<=end){
        int mid = start + (end - start )/2;
        cout<<mid<<endl;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid]<target)
            {   
                start = mid + 1;
                }
        else{
            end = mid -1;
            }
    }
    return -1;
}

int search(vector<int>& nums, int target) {
int start = 0;
int end = nums.size()-1;
int res = -1;
while(start<=end){
    if(nums[start]<nums[end]){
        res = search_(nums,start,end,target);
        break;
        }
    int mid = start + (end-start)/2;
    if(nums[mid] == target)
        {
            res = mid;
            break;
        }
        
    else if(nums[start]<=nums[mid]){
            if(target>=nums[start] && target < nums[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            }
    else if(nums[mid]<=nums[end]){
            if(target>nums[mid] && target <=nums[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
return res;
}
int main(){
file_i_o();
// int n,k;cin>>n>>k;
// vector<int> V(n);
// for(int i =0;i<n;i++)
//     cin>>V[i];
// cout<<search(V,k);
int n,target;
cin>>n>>target;
vector<int> V(n);
for(int i =0;i<n;i++)
    cin>>V[i];
cout<<search(V,target);
}