#include<bits/stdc++.h>
using namespace std;
vector<vector<char>> solved_sudoku;
char nums[9] = {'1','2','3','4','5','6','7','8','9'};
bool possible(int num,vector<vector<char>>& board,int i ,int j){
for(int k = 0;k<9;k++){
    if(board[i][k] == num || board[k][j] == num)
        return false;
}

    int t_row = (i/3)*3;
    int t_col = (j/3)*3;

    for(int x = t_row;x<t_row+3;x++){
        for(int y = t_col;y<t_col+3;y++)
                if(board[x][y] == num)
                    return false;    
           }
    return true;

}
bool backtrack(vector<vector<char>>& board,int i,int j){

    if(board[i][j] == '.'){
        for(int idx=0;idx<9;idx++){
            if(possible(nums[idx],board,i,j)){
                board[i][j] = nums[idx];
                backtrack(board,i,j+1);

                bool next = backtrack(board,i,j+1);

                if(next)
                    return true;
                board[i][j] = '.';
            
            }

        } return false;
    }
    else
    return backtrack(board,i,j+1);    
}


void solveSudoku(vector<vector<char>>& board) {

backtrack(board,0,0);

    }
int main(){
    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'}
,{'6','.','.','1','9','5','.','.','.'}
,{'.','9','8','.','.','.','.','6','.'}
,{'8','.','.','.','6','.','.','.','3'}
,{'4','.','.','8','.','3','.','.','1'}
,{'7','.','.','.','2','.','.','.','6'}
,{'.','6','.','.','.','.','2','8','.'}
,{'.','.','.','4','1','9','.','.','5'}
,{'.','.','.','.','8','.','.','7','9'}};

solveSudoku(board);


}