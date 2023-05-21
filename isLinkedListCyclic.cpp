#include<bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;

		
        ListNode *fast = head;
        ListNode *slow = head;
     
        while(fast != NULL && fast ->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow)
                return true;
        }
        
        return false;
    }
    

int main(){
ListNode *node_1 = new ListNode(11);
ListNode *node_2 = new ListNode(12);
ListNode *node_3 = new ListNode(13);
node_1->next = node_2;
node_2->next = node_3;
cout<<hasCycle(node_1);
}