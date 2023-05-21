#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> ans;
int n;
bool safeplace(int r,int c, vector<string> board){
    int tr = r;
    int tc = c;
    while (tr>=0 && tc>=0)
    {
        if(board[tr][tc] == 'Q')
            return false;
        tr--;tc--;        
    }
     tr = r;
     tc = c;
    while (tc>=0)
    {
        if(board[tr][tc]=='Q')
            return false;
        tc--;
    }
     tr = r;
     tc = c;
    while (tr<n && tc>=0)
    {
        if(board[tr][tc]=='Q')
            return false;
        tr++;
        tc--;
    }
    

   return true; 

}
void backtrack(vector<string> &board,int c,vector<vector<string>> &ans){
if(c==n){
    ans.push_back(board);
    return;
}

    for(int r=0;r<n;r++){
        if(safeplace(r,c,board))
        {
            board[r][c] = 'Q';
            backtrack(board,c+1,ans);
            board[r][c]='.';
            }
    }
}
 vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n);
    string s(n,'.');
    for(int i=0;i<n;i++)
        board[i]=s;
    backtrack(board,0,ans);

    return ans;
    }
int main(){
    cin>>n;

vector<vector<string>>sol = solveNQueens(n);
    for (int i = 0; i < sol.size(); i++) {
        for (int j = 0; j < sol[i].size(); j++)
            cout << sol[i][j] << " ";
        cout << endl;

    }
}