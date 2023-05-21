#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> permutations;
void permute(int x,vector<bool>& chosen, vector<int>& permutations){
if(permutations.size()==n){
    for(auto ele:permutations)
        printf("%d ",ele);

        printf("\n");
    return;
}

    for(int i=0;i<n;i++){
        if(chosen[i])
            continue;
        permutations.push_back(i+1);
        permute(x+1,chosen,permutations);
        chosen[i] = false;
        permutations.pop_back();    
    }


}

int main(){
int n;
scanf("%d",&n);
vector<bool> chosen(n,bool(false));
permute(0,chosen,permutations);
}