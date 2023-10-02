#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char words[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void printSpell(int n){
if(n==0)
    return;

printSpell(n/10);
cout<<words[n%10]<<" ";

}
int main(){
    printSpell(2048);
    return 0;
}
