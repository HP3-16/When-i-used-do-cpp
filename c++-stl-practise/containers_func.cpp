#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,10,20,50,100};
    int size = sizeof(arr)/sizeof(int);
    int key = 20;

    auto it = find(arr,arr+size,key);
    cout<<(it-arr);

}