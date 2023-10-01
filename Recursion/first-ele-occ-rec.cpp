#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// arr = [1 2 3 4 5 6 7]
// 
int firstOcc(int *arr, int size, int key){
if(size==0){
    return -1;
}

if(arr[0]==key)
    return 0;
int occ = firstOcc(arr+1,size-1,key);
    if(occ==-1)
        return -1;
    return occ+1;
} 

int main(){

    int arr[] = {1,2,3,4,7,6,7};
    int size = sizeof(arr)/sizeof(int);
    cout<<firstOcc(arr,size,7);
}