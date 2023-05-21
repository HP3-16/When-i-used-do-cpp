#include<bits/stdc++.h>
using namespace std;
 int countWords(vector<string>& words1, vector<string>& words2) {
    unordered_map<string,int> m1;
    unordered_map<string,int> m2;
    for(string word: words1){
        if(m1.find(word)==m1.end())
            m1.insert(make_pair(word,1));
        else
            m1[word]++;
    }
    for(auto i = m1.begin();i!=m1.end();i++){
        if((i->second)!=1)
            m1.erase(i->first);
    }


    for(auto i = m1.begin();i!=m1.end();i++)
      cout<<i->first<<" "<<i->second<<endl;
    // for(string word: words2){
    //     if(m1.find(word)==m1.end())
    //         m1.insert(make_pair(word,1));
    //     else
    //         m1[word]++;
    // }

    return 0;
    }

int main(){
vector<string> words1 = {"leetcode","is","amazing","as","is"};
vector<string> words2 ={"amazing","leetcode","is"};
// cout<<countWords(words1,words2);
 unordered_map<string,int> m1;
    unordered_map<string,int> m2;
    for(string word: words1){
        if(m1.find(word)==m1.end())
            m1.insert(make_pair(word,1));
        else
            m1[word]++;
    }
    // for(auto i = m1.begin();i!=m1.end();i++){
    //     if((i->second)>1)
    //         m1.erase(i->first);
    // }

auto it = m1.begin();
while(it!=m1.end()){
if(it->second > 1)
    m1.erase(it);
    it++;}
    for(auto i = m1.begin();i!=m1.end();i++)
      cout<<i->first<<" "<<i->second<<endl;
      
}
