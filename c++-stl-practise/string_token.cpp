#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    //tokenizing
    char s[100] = "Hey there I like mango";

    char *ptr = strtok(s," ");
    cout<< ptr;

    while(ptr!=NULL){
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }

}
