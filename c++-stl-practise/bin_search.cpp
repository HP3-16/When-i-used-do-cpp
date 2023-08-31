#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,20,30,50,50,50,100,120};
    int key = 30;
    int size = sizeof(arr)/sizeof(int);

    bool present = binary_search(arr,arr+size,key);
    cout<<present;


    auto it = lower_bound(arr,arr+size,50);
    cout<<it-arr;
    it = upper_bound(arr,arr+size,50);
    cout<<it-arr;
    
}