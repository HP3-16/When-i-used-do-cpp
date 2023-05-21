#include<bits/stdc++.h>
using namespace std;
class Node{
int val;
Node* next;
Node(){
    val=0;
    next=NULL;
}
Node(int val){
    this->val = val;
    this->next = NULL;
}
};