/*
76. Minimum Window Substring
Hard

Given two strings s and t of lengths m and n respectively, return the minimum window 
substring
 of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empy string "".

The testcases will be generated such that the answer is unique.

 

Example 1[s]:

Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
Example 2:

Input: s = "a", t = "a"
Output: "a"
Explanation: The entire string s is the minimum window.
Example 3:

Input: s = "a", t = "aa"
Output: ""
Explanation: Both 'a's from t must be included in the window.
Since the largest window of s only has one 'a', return empy string.
 

Constraints:

m == s.length
n == t.lengt[s]h
1 <= m, n <= 105
s and t consist of uppercase and lowercase English letters.

*/
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
void minWindow(string s, string t) {
unordered_map<char,int> mp;
 for(int i = 0;i<t.length();i++){
        if(mp.find(t[i]) == mp.end())
            mp.insert(make_pair(t[i],1));
        else
            mp[t[i]]++;
    }
unordered_map<char,int> running_freq;

int count = mp.size();
int u_count = 0;
int left = 0,right = 0,start_pos=0,min_len = INT_MAX;
while(right < s.length()){
    if( mp[s[right]]!=0){
        if(running_freq.find(s[right]) == running_freq.end())
            {
            running_freq.insert(make_pair(s[right],1));
            }
        else
           {
            running_freq[s[right]]++;
           }
        
        if(running_freq[s[right]] == mp[s[right]])
            {
            u_count++;
            cout<<s[right]<<" included at "<<right<<" unique_count = "<<u_count<<endl;
            }
        }
        
    
    while(u_count == count){
        cout<<left<<" - "<<right<<endl;
        int curr_len = right-left;
        if(curr_len < min_len){
            start_pos = left;
            min_len = right - start_pos;}
        if(running_freq[s[left]] > 0 && left<=right){
            cout<<s[left]<<" released at "<<left<<endl;
            running_freq[s[left]]--;
            cout<<"Running Freq of "<<s[left]<<" is "<<running_freq[s[left]]<<endl;
            cout<<"Map Freq of "<<s[left]<<" is "<<mp[s[left]]<<endl;
            if(running_freq[s[left]] < mp[s[left]] )
                u_count--;
            cout<<"u_count is "<<u_count<<endl;
        }
        left++;
    }   
   right++;
}
cout<<start_pos<<" "<<min_len<<endl;
}
int main(){
    file_i_o();
    string s,t;
    cin>>s>>t;
    minWindow(s,t);
}
