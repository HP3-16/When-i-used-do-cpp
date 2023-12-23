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
int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> prefix_sum(nums.begin(),nums.end());
        map<int,int> mp;
        int sum = 0;
        int ans = 0;
        for(int i = 1;i<nums.size();i++){
            prefix_sum[i] = prefix_sum[i] + prefix_sum[i-1];
        }

        // for(int x : prefix_sum)
        //     cout<<x<<" ";

        // cout<<endl;

        for(int i = 0;i<nums.size();i++){
            prefix_sum[i] = prefix_sum[i]%k;
            prefix_sum[i] = (prefix_sum[i]+k)%k;
            int val = prefix_sum[i];
            if(mp.find(val) == mp.end())
                mp[val] = 1;
            else
                mp[val]++;
        
        }

        // for(int x : prefix_sum)
        //     cout<<x<<" ";

        // cout<<endl;

        // for(int val : prefix_sum){
        //     if(mp.find(val) == mp.end())
        //         mp[val] = 1;
        //     else
        //         mp[val]++;
        // }
        
        for(auto it = mp.begin();it!=mp.end();it++){
            int x = it->second;
            int mod_val = it->first;
            if(mod_val == 0)
                ans++;
            if(mod_val!=0 && x > 1){
                ans += (x*x-1)/2;
                }
        }



    return ans;
}
int main(){
    file_i_o();
    int n,k;
    cin>>n>>k;
    vector<int> V(n);
    for(int i = 0;i<n;i++){
        cin>>V[i];
    }
    cout<<subarraysDivByK(V,k);
}