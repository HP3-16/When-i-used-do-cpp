#include<bits/stdc++.h>
#include<array>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++) 
typedef vector<int> vi;
int main(){
    vector<int > v = {2,4,6,-11,8,9,100};
    sort(v.begin(),v.end());
    rep(i,0,v.size()){
        printf("%d ",v[i]);
    }

    int arr[] = {3,9,-1,7,9,1,94,37};
    int len = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+len);
    rep(i,0,len){
        printf("%d ",arr[i]);
    }

}
