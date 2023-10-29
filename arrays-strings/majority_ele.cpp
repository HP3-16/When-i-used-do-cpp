#include<bits/stdc++.h>
#include<vector>a
using namespace std;
vector<int> ans;
void iterVector(vector<int> v){
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
vector<int> majortityEle(vector<int> v){
    int e1 = v[0];
    int c1 = 1;
    int e2 = 0;
    int c2 = 0;

for(int i =i;i<v.size();i++){

    if(e1 == v[i])
        c1++;
    
    else if(e2 == v[i])
        c2++;
    
    else if(c1==0){
        e1 = v[i];
        c1++;
        }
    else if(c2==0){
        e2 = v[i];
        c2++;
        }
    else
    {
        c1--;
        c2--;
    }
}

    c1 = c2 = 0;
    for(int i =0;i<v.size();i++){
        if(v[i]==e1)
            c1++;
        else if(v[i]==e2)
            c2++;
    }

if(c1>(v.size()/3))
    ans.push_back(e1);

if(c2>(v.size()/3))
    ans.push_back(e2);

return ans;
}

int main(){

    int n;
    cin>>n;
    vector<int> v;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    
    vector<int> ans_list = majortityEle(v);

    iterVector(ans_list);
}