#include<iostream>
using namespace std;


struct ListNode{
    int val ;
    ListNode *next ;
    ListNode(int x) : val(x) , next(NULL) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *startA = headA;
    ListNode *startB = headB;
    
    while (startA != startB) {
        startA = (startA == nullptr) ? headB : startA->next;
        startB = (startB == nullptr) ? headA : startB->next;
    }
    
    return startA; 
}

int main(){

    return 0;
}