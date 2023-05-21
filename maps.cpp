#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,int> m;
    m['a'] = 1;
    m['b'] = 2;
    m['c'] = 3;
    //printf("%d ",m['c']);

    if(m.count('X'))
        cout<<"exists";
    else
        cout<<"Not exists";
}