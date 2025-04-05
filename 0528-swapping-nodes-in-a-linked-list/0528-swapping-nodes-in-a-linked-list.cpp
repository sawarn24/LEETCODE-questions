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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first=head;
        ListNode* second=head;
        ListNode* temp=head;
        int cnt=1;

        while(temp)
        {
             if(cnt==k)
            {
                first=temp;
                
            }
             else if(cnt>k)
            {
               second=second->next;
                
            }
            cnt++;
            temp=temp->next;
           
            }
            int temp1=first->val;
            first->val=second->val;
            second->val=temp1;
            return head;
        
    }
};