#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void forward(int n){
if(n==0)
    return;
forward(n-1); // assume this prints 1-9
cout<<n<<endl;// this prints the 10

}
void backward(int n){
if(n==0)
    return;
cout<<n<<endl;
backward(n-1);
}
int main(){
    int n = 10;
    forward(n);
    backward(n);
}