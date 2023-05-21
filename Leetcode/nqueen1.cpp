#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> ans;
int n;

bool safe_place_for_queen(int r,int c,vector<string> board){
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


void backtrack(vector<string> &board,int row){
if(row==n){
    ans.push_back(board);
    return;
}

for(int col = 0;col<n;col++){
if(safe_place_for_queen(row,col,board))
    {
        board[row][col] = 'Q';
        backtrack(board,row+1);
        board[row][col] = '.';
    }
}
}

vector<vector<string>> solveNQueens(int n) {
std::vector<std::string> board(n, std::string(n,'.'));
backtrack(board,0);
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





