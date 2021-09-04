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
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        if(head==NULL)
            return NULL;
        temp->val=head->val;
        
        while(head!=NULL)
        {
            if(temp->val!=head->val)
            {
                ListNode* ans1=new ListNode(); 
                ans1->val=head->val;
                temp->next=ans1;
                
                temp=temp->next;
            }
            head=head->next;
            
        }
        return ans;
    }
};