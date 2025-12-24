#include<iostream>
using namespace std ;

struct ListNode {
    int val ; 
    ListNode *next;
    ListNode() :  val(0) , next(nullptr){}
    ListNode(int x) :  val(x) , next(nullptr) {}
    ListNode(int x , ListNode *next): val(x) , next(next){}
};

ListNode* mergeTwoLists(ListNode* list1 , ListNode* list2)
{
    ListNode dummy(0);
    ListNode* tail = &dummy;

     while (list1 != nullptr && list2 != nullptr) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        }
        else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if (list1 != nullptr)
        tail->next = list1;
    else
        tail->next = list2;

    return dummy.next;
}

int main(){

    ListNode* node3 = new ListNode(30);
    ListNode* node2 = new ListNode(20, node3);  
    ListNode* node1 = new ListNode(10, node2);  
    ListNode* list1  = node1;

    ListNode* node6 = new ListNode(35);
    ListNode* node5 = new ListNode(25, node6);  
    ListNode* node4 = new ListNode(15, node5);  
    ListNode* list2  = node4;

    ListNode *temp = mergeTwoLists(list1 , list2) ;

    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl ;
    return 0 ;
}