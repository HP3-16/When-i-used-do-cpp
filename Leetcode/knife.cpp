#include<bits/stdc++.h>
using namespace std;

int count_rounds(int n){
    int count=0;
    while(n!=0){
        n/=2;
        count++;
        if(n==1)
            break;
        
    
    
    }
return count;
}

void alive(int n){
    int p;
    for(p=1;p<=n;p=p*2);
    cout<<(2*n)-p+1<<endl;
}
int main(){
    alive(100);
    cout<<count_rounds(100);
}