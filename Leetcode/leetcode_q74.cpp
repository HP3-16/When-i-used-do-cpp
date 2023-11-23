#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int r = matrix.size();
    int c = matrix[0].size();

    int start = 0;
    int end = r-1;
    int selected_row = -1;
    while(start<=end){
        int mid = start + (end-start)/2;

        if(target > matrix[mid].back())
            start = mid+1;
        else if(target<matrix[mid].front())
            end = mid-1;
        else{
            selected_row = mid;
            break;
        }
    }

    if(selected_row == -1)
        return false;
    return binary_search(matrix[selected_row].begin(),matrix[selected_row].end(),target);
}

void display(vector<vector<int> > V){
        for(vector<int> vec: V){
        for(int val: vec){
            cout<<val<<" "; 
        }
        cout<<endl;
    }
}
int main(){
    file_i_o();
    int m,n,target;
    cin>>m>>n>>target;
    vector< vector<int> > V(m,vector<int>(n));
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>V[i][j];
        }
    }

cout<<searchMatrix(V,target);

}