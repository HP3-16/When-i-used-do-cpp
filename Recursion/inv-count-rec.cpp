#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;

    int temp[100];
    int count = 0;

    while(i<=mid && j<=e){
        if(arr[i]<=arr[j])
            temp[k++] = arr[i++];
        else{
            temp[k++] = arr[j++];
            count = count + (mid-i+1); //mid - i + 1 gives the num of ele greater than the element at i
        }
    }

    while(i<=mid)
        temp[k++] = arr[i++];
    
    while(j<=e)
        temp[k++] = arr[j++];

    for(int i =s;i<=e;i++)
        arr[i] = temp[i];


return count;

}
int inversion_count(int *arr, int start, int end){

if(start>=end)
    return 0;

int mid = start + (end-start)/2;

int c1 = inversion_count(arr,start,mid);
int c2 = inversion_count(arr,mid+1,end);
int c3 = merge(arr,start,end);

return (c1+c2+c3);


}
int main(){
    int arr[] = {1,5,2,6,3,0};
    int size = sizeof(arr)/sizeof(int);
    cout<<inversion_count(arr,0,size-1);
}