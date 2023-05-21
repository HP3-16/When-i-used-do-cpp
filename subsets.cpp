#include<bits/stdc++.h>
using namespace std;
void ss(int k,vector<int> S,int n){
    if(k==n){
        for(int ele : S)
            printf("%d ",ele);
        printf("\n");
        return;
        }
    else{
        ss(k+1,S,n);
        S.push_back(k);
        ss(k+1,S,n);
        S.pop_back();
    }
}
int main()
{
    vector<int> S;
    ss(0,S,3);

    

}