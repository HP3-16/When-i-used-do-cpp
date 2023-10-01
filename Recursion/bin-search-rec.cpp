#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// 1 2 "3" 4 5
// 
//
// 
int bsearch(int *arr, int lo, int hi, int key){
    if(lo<=hi)
    {
    int mid = lo+(hi-lo)/2;
    
    if(arr[mid] == key)
        return mid;
    
    if (arr[mid]>key)
        return bsearch(arr,lo,mid-1,key);
    
    return bsearch(arr,mid+1,hi,key);
    }
    return -1;
}



int main(){
    int arr[] = {1,2,3,4,5};
    int key = 4;
    int size = sizeof(arr)/sizeof(int);
    cout<<bsearch(arr,0,size-1,key);
    return 0;
}
