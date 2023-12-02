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
int findMin(vector<int>& nums) {
       int start = 0;
       int end = nums.size()-1;

       while(start<end){
        if(nums[start]<=nums[end])
            return nums[start];

        else{
            int mid = start + (end-start)/2;
            if(nums[mid]>nums[end])
                start = mid+1;
            else
                start = mid;
        }
       }
return nums[start];
    }
int main(){
file_i_o();
int n;cin>>n;
vector<int> V(n);
for(int i =0;i<n;i++)
    cin>>V[i];
cout<<findMin(V);
}