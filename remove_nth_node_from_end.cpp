#include <iostream>

using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = findLength(head);
        int fromStart = l - n + 1;
        int i = 1;
        ListNode* curr = head;
        ListNode* prev;
        
        while(i != fromStart){
            prev = curr;
            curr = curr->next;
            i++;
        }
        
        if(prev != nullptr) 
            prev->next = curr->next;
        else{
            head = curr->next;        
        }
        
        return head;
        
        
    }
    
    int findLength(ListNode* head){
        int l = head != nullptr ? 1 : 0;
        ListNode* curr = head;
        while(curr->next != nullptr){
            curr = curr->next;
            l++;
        }
        return l;
    }

    void traverseLinkedList(ListNode* head){
        ListNode *curr = head;
        while(curr != nullptr){
            cout << curr->val << ", ";
            curr = curr->next;
        }
    }
    
};


int main(){
    Solution mySolution;
    ListNode *forth = new ListNode(5);
    ListNode *third = new ListNode(4, forth);
    ListNode *second = new ListNode(3, third);
    ListNode *first = new ListNode(2, second);
    ListNode *head = new ListNode(1, first);
    mySolution.traverseLinkedList(head);
    cout << "\n";
    mySolution.removeNthFromEnd(head, 4);
    mySolution.traverseLinkedList(head);
}