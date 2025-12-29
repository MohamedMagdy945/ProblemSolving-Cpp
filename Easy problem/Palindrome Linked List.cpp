#include<iostream>
using namespace std;


struct ListNode {
    int val ; 
    ListNode *next;
    ListNode() :  val(0) , next(nullptr){}
    ListNode(int x) :  val(x) , next(nullptr) {}
    ListNode(int x , ListNode *next): val(x) , next(next){}
};

bool isPalindrome(ListNode* head){
    if(!head) return true ;
    
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* current = slow ;
    ListNode* prev = nullptr ;
    while (current)
    {
        ListNode* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    while (prev)
    {
        if(head->val != prev->val) return false;
        head = head->next;
        prev = prev->next;
    }
    return true;
}

int main(){
    return 0;
}