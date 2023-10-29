#include<bits/stdc++.h>
using namespace std;

void func(char *str, int idx){
    if((str[idx] == '\0' )|| (str[idx+1] == '\0'))
        return;

    if(str[idx] =='p' && str[idx+1] =='i'){
        int pointer_j = idx+2;
        
        while(str[pointer_j]!='\0')
            pointer_j++;

        while(pointer_j>=idx+2){
            str[pointer_j+2] = str[pointer_j];
            pointer_j--;
        }
        str[idx] = '3';
        str[idx+1] ='.';
        str[idx+2] = '1';
        str[idx+3] = '4';
        func(str,idx+4);
    }
    else{
        func(str,idx+1);
    }


}

int main(){
char str[1000] = "xpirtspihu";
func(str,0);

cout<<str;
}