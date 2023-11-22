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
int main(){
    file_i_o();
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    map<int, bool> visited;
    for(int i = 0;i<v.size();i++)
        visited[i] == false;
    int max_len = INT_MIN;

    for(int i = 0;i<v.size();i++){
        int len=0;
        if(!visited[i]){
            visited[i] = true;
            len++;
            int curr = v[i];
            
            while(!visited[curr]){
                visited[curr] = true;
                len ++;
                curr = v[curr];
            }
            max_len = max(len,max_len);
        }
    }

    cout<<max_len;






}