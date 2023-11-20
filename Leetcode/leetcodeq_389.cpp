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
char findTheDifference(string s, string t) {
        char ans;
        vector<int> freq(26);

        for(char ch : s)
            freq[ch-'a']--;
        
        for(char ch: t)
            freq[ch-'a']++;

        
        for(int i = 0;i<26;i++)
            if(freq[i] == 1)
                ans = 'a'+i;
        
        return ans;
                
    }
int main(){
    file_i_o();
    string s,t;
    cin>>s>>t;
    cout<<findTheDifference(s,t);
}