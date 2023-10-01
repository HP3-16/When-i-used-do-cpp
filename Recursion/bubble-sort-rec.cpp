#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void bubbleSortPartRec(int *arr, int n){
    if(n==1)
        return;
    
    for(int j=0;j<n-1;j++)
        if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);

    bubbleSortPartRec(arr,n-1);
}

void bubbleSortFullRec(int *arr, int j, int n){
    // base cases
    if(n==1)
        return;
    if(j==n-1) // you have done single pass in arr
        return bubbleSortFullRec(arr,0,n-1);

    if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    bubbleSortFullRec(arr,j+1,n);
    return;
}

int main(){
    int arr[] = {3,1,5,2,4};
    int size = sizeof(arr)/sizeof(int);
    bubbleSortFullRec(arr,0,size);
    for(int ele:arr){
        cout<<ele;
    }
}