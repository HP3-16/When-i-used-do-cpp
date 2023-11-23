// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// void file_i_o(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt","r",stdin);
//         freopen("output.txt","w",stdout);
//     #endif
// }
// vector<int> to_vector(string s){
//     string delimiter = string(1,',');
//     string token;
//     vector<int> ans;
//     size_t start=0,end;

//     while((end = s.find(delimiter,start))!= string::npos){
//         token = s.substr(start,end-start);
//         // int num = stoi(token);
//         ans.push_back(stoi(token));
//     }
//     ans.push_back(stoi(s.substr(start)));

// return ans;
// }
// int main(){
//     file_i_o();
//     string s;
//     cin>>s;
//     s = string(s.begin()+1,s.end()-1);
//     vector<int> nums = to_vector(s);
//     for(int val: nums)
//         cout<<val;
// }