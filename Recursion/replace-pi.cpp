#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void replacePi(char arr[],int i){
if(arr[i] == '\0'|| arr[i+1] == '\0')
    return;

if(arr[i] == 'p' && arr[i+1] =='i'){
    // shifting by 3 points and wrtie 3.14
    int j = i+2;
    while(arr[j]!='\0')
        j++;

    while(j>=i+2){
        arr[j+2] = arr[j];
        j--;
    }
    arr[i] = '3';
    arr[i+1] = '.';
    arr[i+2] = '1';
    arr[i+3] = '4';
    replacePi(arr,i+4);
    }
else{
    replacePi(arr,i+1);
    }
return;
}

int main(){
    char str[100];
    cin>>str;
    replacePi(str,0);
    cout<<str;
}

