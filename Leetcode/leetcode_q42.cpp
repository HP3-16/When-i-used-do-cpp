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
int trap(vector<int>& height) {
    int start = 0,end = height.size()-1;
    int lmax = INT_MIN, rmax = INT_MIN;
    int ans = 0;
    while(start<end){
        if(height[start] < height[end]){
            if(height[start] > lmax)
                lmax = height[start++];
            else
                ans += (lmax - height[start++]);
         }
         if(height[start] >= height[end]){
            if(height[end] > rmax)
                rmax = height[end--];
            else
                ans += (rmax - height[end--]);
         }
    }
       
    return ans;

}

int trap_v2(vector<int>& height){

}
int main(){
    file_i_o();
    int n;
    cin>>n;
    vector<int> height(n);
    for(int i = 0;i<n;i++)
        cin>>height[i];
    
    // cout<<trap(height);
    trap_v2(height);
}