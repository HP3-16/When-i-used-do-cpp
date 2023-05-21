#include<bits/stdc++.h>
using namespace std;
vector<int> permutations;
int n;
void permute(){
    for(int i=0;i<n;i++){
        permutations.push_back(i+1);
        }
    do{
        for(auto ele: permutations)
            printf("%d ",ele);
        printf("\n");
    }while(next_permutation(permutations.begin(),permutations.end()));

}
int main(){
n=3;
permute();
}