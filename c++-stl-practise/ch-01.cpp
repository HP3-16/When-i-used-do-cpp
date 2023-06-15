#include<iostream>
using namespace std;
// Template 
template <typename T>

T area(T a, T b){
    T result = a*b;
    return result;
}
template <typename S>
S squared(S a){
S res = a*a;
return res;
}
int main(){
    int a1 = area<int>(10,10);
    float a2 = area<float>(17.2,6.1);
    cout<<a1<<" "<<a2<<endl;

    int s = squared<int>(5);
    cout<<s<<endl;
}