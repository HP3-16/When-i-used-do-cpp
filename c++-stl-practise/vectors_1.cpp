#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    vector<int> b(5,10);
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,4,5};

    for(int i=0;i<b.size();i++){
        cout<<b[i]<<endl;
    }

    for(vector<int>::iterator it = b.begin();it!=b.end();it++)
        cout<<*it<<endl;

}