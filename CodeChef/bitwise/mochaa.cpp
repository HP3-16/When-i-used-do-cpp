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
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        vector<int> V(n);
        for(int i = 0;i<n;i++)
            cin>>V[i];
        
        int ans = V[0];
        for(int ele: V){
            ans = ans&ele;
        }
        
        cout<<ans<<endl;
    t--;
    }
    }