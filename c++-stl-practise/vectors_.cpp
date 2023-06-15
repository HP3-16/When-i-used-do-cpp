#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    vector<int> v = {1,2,3};
    cout<<"v.size() "<<v.size()<<endl;
    int cap = v.capacity();
    cout<<"Initial capacity =  "<<cap<<endl;
    //cout<<"v.max_size()"<<v.max_size()<<endl;

    v.push_back(5);
    cap = v.capacity();
    cout<<"new capacity = "<<cap<<endl;

    for(int i = 0;i<100;i++){
        v.push_back(i);
        if(cap!=v.capacity())
            {
                cap = v.capacity();
                cout<<"Updated capacity = "<<cap<<endl;
            }
    }
    

    cout<<"front "<<v.front()<<endl<<"back "<<v.back()<<endl;
    
    cout<<"\nInserting Elements\n";

    v.insert(v.begin()+2,-100);
    cout<<v[2]<<endl;
    
    vector<int> v1 = {5,6,7,8,9};
    list<int> li = {-100,-200,300,-80};

    v1.insert(v1.begin()+2,li.begin(),li.end());

    for(auto it:v1)
        cout<<it<<" ";
    cout<<endl;

    v1.erase(v1.begin());
    
    for(auto it:v1)
        cout<<it<<" ";

    cout<<endl;

    v1.erase(v1.begin()+1,v1.begin()+5);

    for(auto it:v1)
        cout<<it<<" ";
   
   
   
   
    return 0;
}