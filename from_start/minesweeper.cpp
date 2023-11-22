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
int count_mines(int r,int c, vector<vector<string> >& board){
int count = 0;
if(board[r-1][c] == to_string('*')){

}
}
int main(){
    file_i_o();
    int r,c;
    cin>>r>>c;
    vector<vector<string> > board(r,vector<string>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
           { char x;
            cin>>x;
            board[i][j].push_back(x);}
    }
    
    // for(vector<string> v : board){
    //     for(string s : v)
    //         cout<<s<< " ";
    //     cout<<endl;
    // }

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            



        }
}

}