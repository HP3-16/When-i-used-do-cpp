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
    int n;
    int k;
    cin>>n>>k;

    vector<int> v(n,0);
    vector< pair<int, int> > q(k);
    for(int i=0;i<k;i++){
        cin>>q[i].first;
        cin>>q[i].second;
    }


    
    for(int i=0;i<k;i++){
        if(q[i].second + 1 <n)
        {
            v[q[i].first]++;
            v[q[i].second + 1]--;
            }
    }
    

    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }

    for(int i = 0;i<n;i++)
        cout<<v[i]<<" ";
}