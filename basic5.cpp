#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int binSearch(int* arr, int n,int x){
    auto k = lower_bound(arr,arr+n,x)-arr;
    if(k<n && arr[k] == x)
        printf("Found at %d, the value %d",k,x);
    else
        printf("\nNot Found");
}

int main(){
    int x;
    int n = 11;
    int arr[] = {2,4,5,6,8,10,11,19,23,37,50};
    cin>>x;
    //lower bound - atleast
    auto ele = lower_bound(arr,arr+n,x);
    printf("%d\n",*ele); 
    //upper bound - larger than x
    ele = upper_bound(arr,arr+n,x);
    printf("%d\n",*ele);

    binSearch(arr,n,x);

}