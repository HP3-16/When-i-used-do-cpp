#include<iostream>
#include<vector>
#include<list>

using namespace std;
void print(list<int> &ls){
    for(list<int>::iterator it = ls.begin();it!=ls.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;

}
int main(){
    list<int> nums = {1,2,3,4,5,6};
    print(nums);

    //Size
    list<int> nums2 = nums;
    cout<<nums.size()<<" "<<nums2.size()<<endl;

    //Front and Back
    cout<<"Front = "<<nums.front()<<endl<<"Back = "<<nums.back()<<endl;

    cout<<boolalpha<<nums.empty()<<endl;



    //Insertion
    //assume insertion before 3
    cout<<"Before inserting "<<endl;
    print(nums);
    
    list<int>::iterator it = nums.begin();
    while(*it!=3 && it!=nums.end()){ // bound check is also important 
        it++;
    }
    it = nums.insert(it,100);
     cout<<"After inserting "<<endl;
    print(nums);

    //Erase
    nums.erase(it);
    print(nums);
}