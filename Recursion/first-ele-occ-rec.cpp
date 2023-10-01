#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// arr = [1 2 3 4 5 6 7]
// 
int storeOcc(int *arr, int i, int n, int key,int *out, int j){
    if(i==n)
        return j;
    
    if(arr[i] == key){
        out[j] = i;
        return storeOcc(arr,i+1,n,key,out,j+1);
    }
    return storeOcc(arr,i+1,n,key,out,j);
}
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

int lastOcc(int *arr, int size, int key){
if(size == 0)
    return -1;

int idx = lastOcc(arr+1,size-1,key);
if(idx==-1){
    if(arr[idx]==key)
        return 0;
    else
        return -1;
}

return idx+1;
        
}

void allOcc(int *a,int i, int size, int k){
    if(i==size)
        return;
    if(a[i] == k)
        cout<<i<<", ";
      allOcc(a,i+1,size,k); 

}
int linSearchRec(int *arr,int idx,int size, int key){
if(idx==size)
    return -1;
if(arr[idx] == key)
    return idx;
int pos = linSearchRec(arr,idx+1,size,key);
return pos;
}

int main(){

    int arr[] = {1,2,3,4,7,6,7};
    int size = sizeof(arr)/sizeof(int);
    cout<<firstOcc(arr,size,7);

    allOcc(arr,0,size,7);

}