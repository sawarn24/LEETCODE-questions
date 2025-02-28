/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
    Node* temp=head;
    while(temp)
    {
       Node* copy = new Node(temp->val);
       copy->next=temp->next;
       temp->next=copy;
       temp=temp->next->next;
    }
    temp=head;
    while(temp)
    {  if(temp->random==NULL)
    {
        temp->next->random=NULL;
        temp=temp->next->next;
    }
    else{
        temp->next->random=temp->random->next;
        temp=temp->next->next;
    }
    }
     Node* newHead = head->next;
        Node* orig = head, *copy = newHead;
        while (orig) {
            orig->next = copy->next;
            orig = orig->next;
            if (orig) {
                copy->next = orig->next;
                copy = copy->next;
            }
        }

        return newHead;
        
    }
};