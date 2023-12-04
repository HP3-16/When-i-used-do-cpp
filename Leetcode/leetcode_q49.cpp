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
bool string_cmp(const pair<string,int> &a, const pair<string,int> &b)
{
    return (a.first < b.first);
}

vector<vector<string> > groupAnagrams(vector<string>& strs) {
vector<vector<string> > ans;
vector<string> S(strs.begin(),strs.end());
for(int i = 0; i<S.size();i++){
    sort(S[i].begin(),S[i].end());
}

vector<pair<string,int> > mp;
for(int i = 0; i<S.size(); i++){
   mp.push_back(make_pair(S[i],i));
}

sort(mp.begin(),mp.end(),string_cmp);

string curr_ang = mp[0].first;
vector<string> bucket;
for(int i = 0; i<mp.size();i++){
string word = strs[ mp[i].second ];
string sorted_word = mp[i].first;
if(curr_ang == sorted_word){
    bucket.push_back(word);
    continue;
    }
    ans.push_back(bucket);
    bucket.clear();
    curr_ang = sorted_word;
    bucket.push_back(word);
}
ans.push_back(bucket);


return ans;
}


int main(){
    file_i_o();
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i = 0;i<n;i++){
        cin>>s[i];
    }
    vector<vector<string> > V =  groupAnagrams(s);
       
        for(vector<string> vec : V){
            for(string str : vec){
                cout<<str<<" ";
            }
        cout<<endl;
        }
    
}