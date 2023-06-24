#include <bits/stdc++.h>
using namespace std;

ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        
        while(head != NULL){
            ListNode* next = head->next; // pointer to store the next node
            head->next = prev; // head's next is prev node
            prev = head; // prev node is nore head
            head = next; // head is now  next
        }
        return prev;
    }
