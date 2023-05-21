#include<bits/stdc++.h>
using namespace std;

int row[4],TC,a,b,line_counter;

bool place(int r,int c){
    // return if the place is valid
    for(int prev = 0;prev<c;prev++){
        if(row[prev]==r || abs(row[prev]-r)==abs(prev-c))
            return false;
    }
    return true;
}

void backtrack(int c){
if(c==4 && row[b]==a){
    printf("%2d     %d",++line_counter,row[0]+1);
    for(int j=1;j<4;j++)
        printf(" %d",row[j]+1);
    printf("\n");
}


    for(int r=0;r<4;r++)
        if(place(r,c)){
            row[c] = r;
            backtrack(c+1);
        }
}

int main() {
scanf("%d", &TC);
while (TC--) {
scanf("%d %d", &a, &b); a--; b--; // switch to 0-based indexing
memset(row, 0, sizeof row); line_counter = 0;
printf("SOLN     COLUMN\n");
printf(" #     1 2 3 4\n\n");
backtrack(0); // generate all possible 4! candidate solutions
if (TC) printf("\n");
} } // return 0;