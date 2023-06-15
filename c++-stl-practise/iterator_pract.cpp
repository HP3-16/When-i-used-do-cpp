#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> V = {12,21,33,42,17,91};
    printf("V.begin() -> %d",*V.begin());
    printf("\n");
    printf("V.rbegin() -> %d",*V.rbegin());

    int *x = &V[5];
    x++;
    *x = 100;
    printf("\nV.end() -> %d",*V.end());
    return 0;
}