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
ll countHours(vector<int>& V, int k){
    ll ans = 0;
    for(int val : V){
        // cout<<(val+k-1)/k<<" "; // floor
        ans += (val+k-1)/k;
    }
    // cout<<endl;
return ans;
}
 int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = 1e9;
        int k = 1e9;

        while(start<=end){
        
        int mid = start+(end-start)/2;
         if(countHours(piles,mid)<=h){
            k = mid;
            end = mid-1;
         }
         else
            start = mid+1;
        }
    
    return k;

}

int main(){
file_i_o();
int n,h;
cin>>n;
vector<int> piles(n);
for(int i = 0;i<n;i++)
    cin>>piles[i];

cin>>h;

cout<<minEatingSpeed(piles,h);
}