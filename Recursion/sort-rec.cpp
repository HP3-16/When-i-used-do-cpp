#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// 1 2 3 4 5
// res = 1<2 && [345]'
// res = 2<3 && [45]'
// 
//
//
//
//
bool rsort(int *arr, int size){
if(size==0 || size==1)
    return true;

return ((arr[0]<arr[1]) && rsort(arr+1,size-1));

}



int main(){
    int arr[] = {1,2,3,15,41};
    int size = sizeof(arr)/sizeof(int);
    cout<<rsort(arr,size);

}