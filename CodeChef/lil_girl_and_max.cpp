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

int main(){
    file_i_o();
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];

    vector<pair<int,int> > q(k);

    for(int i=0;i<k;i++)
        {
            cin>>q[i].first;
            cin>>q[i].second;
        }


    vector<int> v(n,0);
    
    for(int i=0;i<k;i++){
        if(q[i].first-1<n)
            v[q[i].first-1]++;

        if(q[i].second<n)
            v[q[i].second]--;
        

    }

    for(int i =1;i<n;i++)
        v[i] = v[i]+v[i-1];

    sort(v.begin(),v.end());
    sort(nums.begin(),nums.end());
    int ans = 0;
    for(int i =0;i<n;i++)
        ans += (v[i]*nums[i]);
    cout<<ans;

    return 0;
}