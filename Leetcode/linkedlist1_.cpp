#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node* next;

Node(int val): data(val),next(nullptr){}
~Node(){
    if(next)
        delete next;
    next = nullptr;
}
};

Node* head = nullptr;
void printNode(Node* head){
    Node* it;
    it = head;
    while(it){
        cout<<it->data<<" -> ";
        it = it->next;
    }
    cout<<"NULL";
}
void insertNode(int data)
{
    Node* node = new Node(data);
    node->next = head;
    head = node;    
}



void insertNodeAtEnd(int data){
    Node* node = new Node(data);
    if(!head){
        head = node;
    }
    else{
    Node* tail = head;
    while(tail->next){
        tail = tail->next;}
    tail->next = node;
    tail = node;}
}

void insertAtKPos(int data,int k){
    if(k==1){
        Node* node = new Node(data);
        node->next = head;
          head = node;
          return;
    }
    Node* prevNode = head;
    Node* nextNode = head;

    int k_ = k;

    while(k_>1){
        if(nextNode)
        {
            prevNode = nextNode;
            nextNode = nextNode->next;
            k_--;
        }
        
        else{
            return;
        }
    }
if(k_ == 1){
    Node* n = new Node(data);
    n->next = nextNode;
    prevNode->next = n;
}

}
int main(int argc, const char* argv[]){
    insertNode(1);
    insertNode(2);
    insertNode(3);
    insertNodeAtEnd(5);
    printNode(head);
}