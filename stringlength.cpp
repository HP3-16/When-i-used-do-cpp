#include<bits/stdc++.h>
using namespace std;
int length(char s[]){

if(s[0]=='\0')
    return 0;

int sub_str_len = length(s+1);
return 1 + sub_str_len;

}
int main(){
char str[100];
cin>>str;

int l = length(str);
printf("%d",l);
}
