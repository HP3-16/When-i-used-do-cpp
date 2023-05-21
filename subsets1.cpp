#include<bits/stdc++.h>
using namespace std;

void print_power_set(int n){
    for(int i = 0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                printf("%d ",j);
            }
        }
    printf("\n");
    }
}




int main(){
    int n=3;
    // for (int b = 0; b < (1<<n); b++) 
    // {
    //     for (int i = 0; i < n; i++) 
    //     {
    //         if (b&(1<<i)){      
    //             printf("%d ",i);
    //             }
    //     }
    //     printf("\n");
    // }

print_power_set(n);
}


// 1 0 0     -> b = 3
// 0 1 0    ->(1<<1)        
// 0 1 0    -> b&(1<<i)
// {0},{1}, {0,1}