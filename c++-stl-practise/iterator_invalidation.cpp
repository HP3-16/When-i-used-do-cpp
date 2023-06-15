#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    auto it = v.begin() + 4; // points to 5
    cout<<*it<<endl;
    cout<<(it-v.begin()); // 4 (contiguous mem. location)


    v.insert(it, 1000); // v = {1,2,3,4,1000,5,6,7}
    cout<<*it<<endl;
    cout<<(it-v.begin()); // outputs random number because iterator is invalid
    //solution it = v.insert();
    //update iterator
    return 0;

}