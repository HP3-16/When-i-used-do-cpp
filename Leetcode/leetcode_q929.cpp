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

int numUniqueEmails(vector<string>& emails) {
unordered_set<string> em_set;
for(string email : emails){    
    string local_add = "",domain_add = "";
    bool local = true,enc_plus = false;
    for (char c:email){
        
        if(c == '@'){
            local = false;
            continue;
            }

        if(local){
            if(c == '+'){
                enc_plus = true;
            }
            if(c!='.'){
                if(!enc_plus)
                    local_add+=c;
            }
        }
        else
        {
                domain_add += c;
        }
    }

    string final_email = local_add + '@' + domain_add;  
    em_set.insert(final_email);
}  
return em_set.size();
}
int main(){

}