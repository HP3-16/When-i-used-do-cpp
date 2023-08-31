#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
// Initialization

string s0;
string s1("Ishipuff");
string s2 = "Haripuff";
string s3(s2); //copy constructor
string s4 = s3;

char a[] =  {'h','e','l','l','o','\0'};
cout<<s1<<endl;

cout<<(s0.empty())<<endl;

s2.append(" loves Ishipuff"); //or s2+=" loves Ishipuff"
cout<<s2<<endl; 

string a1 = "Apple";
string a2 = "Water";
cout<<a1.compare(a2)<<endl;

string text = "Ishipuff loves dogs and Game of Thrones";
int idx = text.find("dogs");
cout<<idx<<endl;


//Iterating
string dummy = "Youtube_is_dopee";
for(int i = 0;i<dummy.length();i++)
    cout<<dummy[i];
cout<<"\n";

for(auto it = dummy.begin();it<dummy.end();it++)
    cout<<*it;
// for each

for(auto ch:dummy)
    cout<<ch<<"_";

}