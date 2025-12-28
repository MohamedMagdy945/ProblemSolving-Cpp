#include<iostream>
using namespace std;



struct ListNode {
    int val ; 
    ListNode *next;
    ListNode() :  val(0) , next(nullptr){}
    ListNode(int x) :  val(x) , next(nullptr) {}
    ListNode(int x , ListNode *next): val(x) , next(next){}
};

ListNode* removeElements(ListNode* head, int val) {
    while (head != nullptr && head->val == val) {
        head = head->next;
    }

    ListNode* current = head;

    while (current != nullptr && current->next != nullptr) {
        if (current->next->val == val) {
            current->next = current->next->next;
        } else {
            current = current->next;
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

    ListNode *temp = removeElements(list1 ,2 ) ;

    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl ;
    return 0 ;

}