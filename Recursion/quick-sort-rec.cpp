#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// QuickSort is an inplace algo. no extra arrays made. But extra space may be taken due to recursion stack
//TC O(nlogn) ; worst case O(n^2) can be fixed using randomized qsort
    //1 .Choose pivot
    //2. Divide (partitioning) : <=pivot and >pivot
    //3. Recursively sort smaller parts

int partition(int *arr, int start,int end){
int j = start;
int i = start-1;
int pivot = arr[end]; // we choose last ele as pivot
for(;j<=end-1;j++){
    //merge into the smaller region
    if(arr[j]<=pivot){
        i=i+1;
        swap(arr[i],arr[j]);
    }
}

swap(arr[i+1],arr[end]);
return i+1;

}

void quickSort(int *arr,int start,int end){
    if(start>=end)
        return;
    //create the left and right regions and then return pivot 
    int pivot = partition(arr,start,end);
    //left part
    quickSort(arr,start,pivot-1);
    //right part
    quickSort(arr,pivot+1,end);

}
int main(){
    int arr[] = {2,7,8,6,1,5,4};
    int size = sizeof(arr)/sizeof(int);

    quickSort(arr,0,size-1);

    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";

    return 0;
}
