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
    
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        
        
        if(temp!=NULL && temp->next!=NULL)
        {
            ListNode* firstNode = head;
            ListNode* secondNode = head->next;

        // Swapping
            firstNode->next  = swapPairs(secondNode->next);
            secondNode->next = firstNode;
            return secondNode;
        }
        else{
            return head;
        }
            
            
        
        
        
    }
};