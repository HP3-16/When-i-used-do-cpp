#include<bits/stdc++.h>
using namespace std;
void print_pattern(int x){
    if(x==0)
        return;

 print_pattern(x-1);
    printf("\n");
    for(int i=0;i<x;i++)
        printf("* ");
       
    
}
int main(){
    print_pattern(5);
}