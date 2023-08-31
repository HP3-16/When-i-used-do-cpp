#include<bits/stdc++.h>
#include<string>

using namespace std;
bool compare(string x,string y){
    if(x.length()==y.length())
        return x<y;
    return x.length()<y.length();
}
int main(){
    int n;
    cin>>n;
    cin.get();
    string s[100];
    for(int i=0;i<n;i++)
        getline(cin,s[i]);

    // for(int i=0;i<n;i++)
    //     cout<<s[i]<<endl;

    sort(s,s+n,compare);
    for(int i=0;i<n;i++)
        cout<<s[i]<<endl;
}
