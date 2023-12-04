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
vector<vector<int> > threeSum(vector<int>& nums) {
set<vector<int> > ans;
sort(nums.begin(),nums.end());
for(int i = 0;i<nums.size();i++){
    // if(i>0 && nums[i] == nums[i-1] || nums[i] == nums[i+1])
    //     continue;
    int l = i+1,r = nums.size() -1 ;
    while(l<r){
        int sum = nums[i] + nums[l] + nums[r];
        if(sum > 0)
            r--;
        else if(sum < 0)
            l++;
        else{
            ans.insert(vector<int>{nums[i],nums[l],nums[r]});
            l++;
            while(nums[l]!=nums[l-1] && l<r)
                l++;
            }
    }
}
return vector<vector<int>> (ans.begin(),ans.end());
}


int main(){
    file_i_o();

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int> > ans = threeSum(v);
    for(vector<int> x : ans){
        for(int ele : x){
            cout<<ele<<" ";
        }
        cout<<endl;
    }


}