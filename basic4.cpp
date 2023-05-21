#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
int size;
cin>>size;
int arr[size];
rep(i,0,size)
    cin>>arr[i];

sort(arr,arr+size);
printf("Enter element to be searched : ");
int ele;
cin>>ele;

int first = 0;
int last = size-1;
while (first<=last)
{
    int mid =( first+last)/2;
    if(arr[mid] == ele){
        printf("Found!\n");
        break;
    }
    if(ele>arr[mid])
        first = mid+1;
    else
        last = mid-1;
}

}