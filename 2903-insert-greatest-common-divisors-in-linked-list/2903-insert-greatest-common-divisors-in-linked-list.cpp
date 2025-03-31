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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) return head;
           ListNode* slow=head;
           ListNode* fast=head;
          while (fast && fast->next)  
           {
            fast=fast->next;
           ListNode* temp = new ListNode(std::gcd(slow->val, fast->val));
            slow->next=temp;
            temp->next=fast;
            slow=slow->next->next;
            
           }
           return head;        
    
    }
};