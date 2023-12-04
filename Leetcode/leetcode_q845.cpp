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

int longestMountain(vector<int>& arr){
vector<int> peak_indices;
int max_len = INT_MIN;
for(int i = 1;i<arr.size()-1;i++){
    if((arr[i-1]<arr[i]) && (arr[i+1]<arr[i]))
        peak_indices.push_back(i);
}
for(int peak : peak_indices){
    int running_len = 1;
    int l=peak,r=peak;
    while(arr[l-1]<arr[l] && l-1 >= 0){
        running_len++;
        l--;
    }
    while(r+1<arr.size() && arr[r+1]<arr[r]){
        running_len++;
        r++;
    }
    max_len = max(max_len,running_len);
}   
return (max_len == INT_MIN)?0:max_len;
}

int main(){
    file_i_o();
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
cout<<longestMountain(nums);
}