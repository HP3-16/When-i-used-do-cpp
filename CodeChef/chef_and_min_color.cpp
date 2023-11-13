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
int main(){
    file_i_o();
    int t;
    cin>>t;

    while(t--){
        int m,n;
        cin>>n>>m;
        vector<pair<ll, int>> v(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first;
            v[i].second = i%m;
        }

        int count = m;
        int right = 0;
        ll ans = INT_MAX;
        sort(v.begin(),v.end());

        vector<int> counts(m,0);

        for(int left = 0; left<n; left++){
            
                while (right< n and count>0)
                {
                   count -= counts[v[right].second]==0;
                   counts[v[right].second]++;
                   right++;
                }
                if(count==0){
                    ans = min(ans,(v[right-1].first - v[left].first));
                }

                if(counts[v[left].second]>0)
                {
                    counts[v[left].second]--;
                }

                count+= counts[v[left].second] == 0;

        }

        cout<<ans<<endl;



    }
}