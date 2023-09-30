#include<bits/stdc++.h>
using namespace std;
int main(){
    float x = 1.0;
    float num = 365;
    float den = 365;
    int people = 0;
    float p;
    cin>>p;
    while(x>=1-p){
    x = x*(num/den);
    num--;
    people++;
    }
    cout<<people;


}