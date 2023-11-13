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

int main(){
    file_i_o();
    vector<int> v1 {10,20,30};
    vector<int> v2 (v1.begin(),v1.end());
    for (auto it = v2.begin();it!=v2.end()-1;it++)
        cout<<*it<<" ";
    // compare arrays
    cout<<((v1==v2)?"True":"False");
    cout<<endl;

    // checks
    vector<bool> v3;
    for(int i=0;i<5;i++)
        v3.push_back(true);
    cout<<((v3 == vector<bool> (5,true))?"True":"False")<<endl;

    // other funs
    v3.clear();
    cout<<v3.size()<<endl;

    cout<<v3.empty();
    return 0;

}