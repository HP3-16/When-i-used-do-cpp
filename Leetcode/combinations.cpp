//How to place n items in r items
#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> ans;
void find_com(int n,int curr,int selected,int k,vector<int> solution){
if(curr>n){
    if(solution.size() == k){
    ans.push_back(solution);}
return;
}

find_com(n,curr+1,selected,k,solution);
solution.push_back(curr);
find_com(n,curr+1,selected+1,k,solution);
solution.pop_back();

}
 vector<vector<int>> combine(int n, int k) {
        vector<int> temp_sol;
        find_com(n,1,0,k,temp_sol);
        return ans;

    }

vector<vector<int>> combine_1(int n, int k){
    vector<vector<int>> final_ans;
    vector<int> temp(k,0);
    int i = 0;
    while(i>=0){
        temp[i]++;
    
    if(temp[i]>n)
        i--;
    else if(i == k-1)
        final_ans.push_back(temp);
    else{
    i++;
    temp[i] = temp[i-1];

}    }
return final_ans;
}

int main(){
    int n,k;
    vector<vector<int>> sol = combine(4,2);

    for (int i = 0; i < sol.size(); i++) {
        for (int j = 0; j < sol[i].size(); j++)
            cout << sol[i][j] << " ";
        cout << endl;
    }


}