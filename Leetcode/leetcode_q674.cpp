#include<bits/stdc++.h>
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

int LCIS(vector<int> &nums){
int count=0;
int final_count=0;
for(int r= 0;r<nums.size();r++){
    if(r==0 || nums[r-1]>=nums[r])
        count=1;
    else
        count+=1;
    final_count = max(count,final_count);
}
return final_count;
}

int main(){
    file_i_o();
    // int size;
    vector<int> nums{1,3,5,4,7};
    // cin>>size;
    // for(int i=0;i<size;i++)
    //     cin>>nums[i];
    cout<<LCIS(nums);
    return 0;
}