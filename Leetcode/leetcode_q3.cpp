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
void lengthOfLongestSubstring(string s){

int left = 0,right = 0,curr_len = 1,max_len=INT_MIN;
unordered_map<char,int> mp;

while(right<s.length()){
    if(mp[s[right]] == 0){
        mp[s[right]]++;
        
        cout<<s[right]<<" added curr_count is"<<mp[s[right]]<<endl;
        right++;
    }
    else{
        mp[s[left]]--;
        cout<<s[left]<<" removed curr_count is "<<mp[s[left]]<<endl;
        left++;
    }
    curr_len = (right-left);
    max_len = max(curr_len,max_len);
    cout<<left<<" - "<<right<<" ";
    cout<<"max_len = "<<max_len<<endl;
}

}
int main(){
    file_i_o();
    string s;
    cin>>s;
    lengthOfLongestSubstring(s);
}