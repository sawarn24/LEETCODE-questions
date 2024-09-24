/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
         ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* curr = dummy; // Start from the dummy node

        // Traverse the list
        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                // Skip the node with the value equal to val
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;  // Free the memory of the removed node
            } else {
                // Move to the next node
                curr = curr->next;
            }
        }
        
        // The new head is dummy->next
        ListNode* newHead = dummy->next;
        delete dummy;  // Free the dummy node
        return newHead;
    }
    
};