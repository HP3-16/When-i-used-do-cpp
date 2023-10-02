#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// 3 step - divide - sort - merge
void merge(int *arr, int s, int e){
    // 3 pointers, i,j,k and then compare the smaller element between 
    // the elements present at i and j and push them to the merged_arr accordingly and increment the pointers 
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;

    int merged_arr[100];

    while(i<=mid && j<=e){
       
        if(arr[i]<arr[j])
            merged_arr[k++] = arr[i++];
        else
            merged_arr[k++] = arr[j++];

    }
    // if any elements are left
    while(i<=mid)
        merged_arr[k++] = arr[i++];

    while(j<=e)
        merged_arr[k++] = arr[j++];

// copying all elements of merged_arr into the actual arr
for(int i=s;i<=e;i++)
    arr[i] = merged_arr[i];
    
}


void mergeSort(int *arr, int start, int end){

if(start>=end)
    return; // just one element here

//divide sort merge
//1. divide
int mid = (start+end)/2;
//2. sort
mergeSort(arr,start,mid);
mergeSort(arr,mid+1,end);
//3. merge
merge(arr,start,end);

}

int main(){
int arr[] = {35,12,0,16,9,7};
int size = sizeof(arr)/sizeof(int);
mergeSort(arr,0,size-1);

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}