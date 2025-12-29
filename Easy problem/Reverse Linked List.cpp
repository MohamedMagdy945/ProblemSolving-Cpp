#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
ListNode* reverseList(ListNode* head)
{
    if(!head || !head->next) return head;

    ListNode* current = head ;
    ListNode* prev = nullptr ;
    
    while (current)
    {
        ListNode* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}


int main(){

    ListNode* node5 = new ListNode(5);
    ListNode* node4 = new ListNode(4 , node5);
    ListNode* node3 = new ListNode(3 , node4);
    ListNode* node2 = new ListNode(2, node3);  
    ListNode* node1 = new ListNode(1, node2);  
    ListNode* list1  = node1;

    ListNode *temp = reverseList(list1) ;

    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl ;
    return 0 ;
    return 0;
}