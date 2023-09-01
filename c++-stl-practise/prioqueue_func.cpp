#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<queue>

// Comparators are classes
using namespace std;
class Student{
    public:
        string name;
        int marks;
        Student(){

        }
        Student(string n, int m){
            name=n;
            marks = m;
        }
};
class StudCompare{
    public:
        bool operator()(Student A,Student B){
            return A.marks<B.marks;
        }
};
int main(){
    priority_queue<Student,vector<Student>,StudCompare> pq;
 
 
    for(int i=0;i<5;i++){
        string name;
        int marks;
        cin>>name>>marks;
        Student st(name,marks);
        pq.push(st);
    }

    //top k  using k log n than n log n in sorting
    int k=3;
    for(int i=0;i<k;i++){
        Student st = pq.top();
        cout<<st.name<<" scored "<<st.marks<<endl;
        pq.pop();
    }


    return 0;
}