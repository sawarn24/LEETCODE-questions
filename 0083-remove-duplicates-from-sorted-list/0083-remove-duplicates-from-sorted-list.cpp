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
    ListNode* deleteDuplicates(ListNode* head) {
         if (!head) return nullptr;  // Check if head is null
        
        ListNode* temp = head;
        
        while (temp && temp->next) {  // Make sure temp and temp->next are valid
            if (temp->val == temp->next->val) {
                ListNode* duplicate = temp->next;
                temp->next = temp->next->next;  // Bypass the duplicate node
                delete duplicate;  // Free memory
            } else {
                temp = temp->next;  // Move to the next node if no duplicate
            }
        }
        return head;
    }
};
        
    
