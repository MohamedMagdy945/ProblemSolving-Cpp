#include<iostream>
using namespace std; 
struct ListNode {
    int val ; 
    ListNode *next;
    ListNode() :  val(0) , next(nullptr){}
    ListNode(int x) :  val(x) , next(nullptr) {}
    ListNode(int x , ListNode *next): val(x) , next(next){}
};

ListNode* deleteDuplicates(ListNode* head)
{
    if (head == nullptr ) return head;

    ListNode* current = head;

    while ( current -> next != nullptr )
    {
        if (current -> val == current -> next -> val){
            current -> next = current -> next -> next;
        }
        else {
            current = current -> next ;
        }
    }
    return head;
}

int main(){

    ListNode* node5 = new ListNode(3);
    ListNode* node4 = new ListNode(2 , node5);
    ListNode* node3 = new ListNode(2 , node4);
    ListNode* node2 = new ListNode(1, node3);  
    ListNode* node1 = new ListNode(1, node2);  
    ListNode* list1  = node1;

    ListNode *temp = deleteDuplicates(list1 ) ;

    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl ;
    return 0 ;
}