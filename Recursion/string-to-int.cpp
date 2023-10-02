#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int str_to_int(char *a, int n){
    if(n==0)    
        return 0;
    int ld = a[n-1] - '0';
    int sub = str_to_int(a,n-1);
    return sub*10 + ld;
        
}
int main(){
    char a[] = "1234";
    int len = strlen(a);

    cout<<str_to_int(a,len);
}