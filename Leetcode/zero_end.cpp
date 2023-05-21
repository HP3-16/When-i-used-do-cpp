#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //vector<int> arr;
    rep(i,0,n){
        cin>>arr[i];
        //arr.push_back()
    }


    for(int i=0,j=0;i<n;i++){  
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
            j=j+1;
        }
    }

for(auto ele:arr){
    printf("%d ",ele);
}
}