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
//     int longestContinuousSubstring(string s) {
//         int len=0;
//         int max_len = 0;
//         int sl = s.length();

//         for(int r = 0;r<sl;r++){
//             if(r==0 || s[r-1]!=s[r]+1)
//                 len=1;
//             else
//                 len+=1;
        
//         max_len = max(len,max_len);
//         }
//     return max_len;
// }
int main(){
    file_i_o();
    string s;
    cin>>s;
    cout<<int(s[0])+1;
    // int ans = longestContinuousSubstring(s);
    // cout<<ans;
    return 0;

}