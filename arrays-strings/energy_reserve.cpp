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

vector<int> getNumPoints(vector<int> layers, vector<int> energy, long k) {
vector<int> ans;
for(int i = 0; i<layers.size();i++){
    int temp_k = k;
    int pts = 0;
    // cout<<"level "<<i+1<<endl;
    int curr_level = i;
while(layers[curr_level]<=temp_k && curr_level<layers.size() && temp_k>=0){
    temp_k = temp_k-layers[curr_level];
    // cout<<"current k "<<temp_k<<endl;
    if(temp_k>=energy[curr_level]){
        pts ++;
        // cout<<"curr_pts: "<<pts<<endl;
        }
    else
        break;
    curr_level++;
}
ans.push_back(pts);
}
return ans;
}

vector<int> getNumPoints1(vector<int> layers, vector<int> energy, long k){ // correct two pointer
    vector<int> ans;
    int l = 0;
    int r = 0;
    int running_k = k;
    int pts = 0;
    
    while(r < layers.size()){
        if(running_k >= layers[r]){
            running_k -= layers[r];
            if(running_k >= energy[r])
            {
                pts++;
                // cout<<"current pts  = "<<pts<<" at idx "<<r<<endl;
                // cout<<"running_k = "<<running_k<<endl;
                r++;
                // cout<<"r incremented to idx "<<r<<endl<<endl;
                if(r == layers.size()){
                    ans.push_back(pts);
                    l++;
                    r = l;
                    pts = 0;
                    running_k = k;  
                }
            }
            else{
                ans.push_back(pts);
                pts = 0;
                running_k = k;
                l++;
                r = l;
                }
        }
        else
        {  ans.push_back(pts);
            running_k = k;
           pts = 0;
           l = r;
        } 
    }

    return ans;
}

int main(){
    file_i_o();
int n,k;
cin>>n>>k;
vector<int> e(n);
vector<int> l(n);
for(int i = 0;i<n;i++){
    cin>>l[i];
}
for(int i = 0;i<n;i++){
    cin>>e[i];
}
vector<int> ans = getNumPoints1(l,e,k);
for(int x : ans)
    cout<<x<<" ";
}