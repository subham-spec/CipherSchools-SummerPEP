#include <bits/stdc++.h>
using namespace std;

ListNode* callRecurssion(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* head2 = callRecurssion(slow->next);
        ListNode* head1 = head;
        
        while(head2!=NULL){
            if(head1->val != head2->val)
                return false;
            head1 = head1->next;
            head2 = head2->next;           
        }
        return true;
    }
