#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++) 
//typedef vector<int> vi;
using namespace std;

void on2(int* arr,int n){
int best = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            best= max(best,sum);
        }
    }
    printf("%d",best);

}
void on(int* arr,int n){
    int best=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum = max(arr[i],sum+arr[i]);
        best = max(sum,best);
    }
    printf("%d",best);
}
void on_window(int* arr, int n, int k){
    int best = 0;
    int max_ = 0;
    for(int i=0;i<n;i++){
        for(int j = i;j<k;j++){
        max_ = max(arr[i],max_+arr[i]);
        best = max(best,max_);}
    }
    printf("%d",best);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }
    // rep(i,0,size)
    //     printf("%d ",arr[i]);

    int arr2[5] = {-1,3,-9,2,1};
    on_window(arr,5,2);

}