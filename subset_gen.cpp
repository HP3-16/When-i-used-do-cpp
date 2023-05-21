#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
int n;
void print_subset(int arr[],int n,int idx){

if(idx==n){
    for(auto ele:ans){
        printf("%d ",ele);
    }
    printf("\n");
}
else{
ans.push_back(arr[idx]);
print_subset(arr,n,idx+1);
ans.pop_back();
print_subset(arr,n,idx+1);
}

}

int main(){
int arr[] = {1,2,3};
int n = sizeof(arr)/sizeof(n);
print_subset(arr,n,0);
}