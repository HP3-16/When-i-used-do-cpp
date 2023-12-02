#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll mod = 1000000007;
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
while (t--)
{   vector<ll> count_msb(50);
    int n;
    cin>>n;
    vector<ll> v;
    for(int i = 0;i<n;i++){
        cin>>v[i];
        ll msb = 63 - __builtin_clz(v[i]);
        count_msb[msb]++;
    }

    for (int ele : count_msb)
        cout<<ele<<" ";
}

}