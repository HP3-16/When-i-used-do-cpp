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
string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        unordered_map<char,int> running_freq;
        int left = 0,right = 0, min_len = INT_MAX;
        int start_pos = 0;

        for(int i = 0;i<t.length();i++){
            if(mp.find(t[i]) == mp.end())
                mp.insert(make_pair(t[i],1));
            else
                mp[t[i]]++;
        }
        int count = mp.size();
        int running_counter = 0;

        while(right < s.length()){

            if(mp[s[right]] != 0)
            {
                if(running_freq.find(s[right]) == running_freq.end())
                    running_freq.insert(make_pair(s[right],1));
                else
                    running_freq[s[right]]++;


            if(running_freq[s[right]] == mp[s[right]]){
                running_counter++;
            }
            }
            while(running_counter == count){
                int curr_len = right-left;
                if(curr_len < min_len){
                    start_pos = left;
                    min_len = right - start_pos;}
                
                if(running_freq[s[left]] > 0){
                    running_freq[s[left]]--;
                    if(running_freq[s[left]] < mp[s[left]])
                        running_counter--;
                }
                left++;
            }
        
        right++;
        
        }

    return (min_len == INT_MAX)?"":s.substr(start_pos,min_len+1);
    }
int main(){
    file_i_o();
    string s,t;
    cin>>s>>t;
    cout<<minWindow(s,t);
}