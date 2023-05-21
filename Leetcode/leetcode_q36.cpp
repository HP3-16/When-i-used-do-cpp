#include<bits/stdc++.h>
using namespace std;
char nums[9] = {'1','2','3','4','5','6','7','8','9'};
bool possible(int num,vector<vector<char>>& board, int i,int j)
{
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
    if(j==9)
        return backtrack(board,i+1,0);
    if(i==9)
        return true;

    if(board[i][j]=='.'){
        for(int idx=0;idx<9;idx++){
            if(possible(nums[idx],board,i,j)){
                board[i][j] = nums[idx];
                bool next = backtrack(board,i,j+1);
                if(next)
                    return true;
                board[i][j]='.';
            }
    } return false;   

}
else
    return backtrack(board,i,j+1);
}


bool isValidSudoku(vector<vector<char>>& board) {
        bool ans = backtrack(board,0,0);
         for (int i = 0; i < board.size(); i++) {
         for (int j = 0; j < board[i].size(); j++)
             if(board[i][j] == '.') return false;
         }


         return ans;
        

    
}



int main(){

vector<vector<char>> board = 
{{'5','3','.','.','7','.','.','.','.'}
,{'6','.','.','1','9','5','.','.','.'}
,{'.','9','8','.','.','.','.','6','.'}
,{'8','.','.','.','6','.','.','.','3'}
,{'4','.','.','8','.','3','.','.','1'}
,{'7','.','.','.','2','.','.','.','6'}
,{'.','6','.','.','.','.','2','8','.'}
,{'.','.','.','4','1','9','.','.','5'}
,{'.','.','.','.','8','.','.','7','9'}};

bool sol = isValidSudoku(board);

cout<<sol<<"\n\n";
for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++)
            cout << board[i][j] << ' ';
        cout << endl;

}
}



// bool is_safe(int num, int board[9][9], int i,int j){

// for(int k=0;k<9;k++)
//     if(board[i][k]==num || board[k][j] == num)
//         return false;
// int row = (i/3) * 3;
// int col = (j/3) * 3;

// for(int k = row;k<row+3;k++)
//     for(int l = col;l<col+3;l++)
//         if(board[k][l] == num)
//             return false;

// return true;
// }
// bool solve(int board[9][9],int i,int j){
// //base case
//     if(j==9)
//         return solve(board,i+1,0);
//     if(i==9)
//         return true;

//     if(board[i][j]==0){
//         for(int num=1;num<=9;num++){
//             if(is_safe(num,board,i,j)){
//                 board[i][j] = num;
//                 bool can_solve_sudoku = solve(board,i,j+1);
//                 if(can_solve_sudoku)
//                     return true;
//                 board[i][j] = 0;
//             }
//         }
//         return false;
//     }
//     else
//     return solve(board,i,j+1);
// }
