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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next)
    return {-1, -1};
        ListNode* temp=head;
        vector<int> res;
        int index=1;
        while(temp && temp->next && temp->next->next)
        {
            if(temp->next->val>temp->val &&temp->next->val>temp->next->next->val )
            {
                res.push_back(index);
            }
           else if(temp->next->val<temp->val &&temp->next->val<temp->next->next->val )
            {
                res.push_back(index);
            }
            temp=temp->next;
            index++;
        }
        if (res.size() < 2) return {-1, -1};
           int mini=INT_MAX;
           int dif=0;
        for(int i=1;i<res.size();i++)
        {
            int dif=res[i]-res[i-1];
            {
                mini=min(mini,dif);
            }
        }
        int larg=res[res.size()-1]-res[0];
        return {mini,larg};
        
    }
};