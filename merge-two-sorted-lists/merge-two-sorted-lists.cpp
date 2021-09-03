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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* head=new ListNode();
        ListNode* currentptr=head;
        int count=0;
        while(l1!=NULL || l2!=NULL)
        {
            count++;
            if(l1==NULL)
            {
                ListNode* newnode=new ListNode();
                newnode=l2;
                currentptr->next=newnode;
                currentptr=newnode;
                l2=l2->next;
            }
            else if(l2==NULL)
            {
                ListNode* newnode=new ListNode();
                newnode=l1;
                currentptr->next=newnode;
                currentptr=newnode;
                l1=l1->next;
            }
            else if(l1->val>l2->val)
            {
                ListNode* newnode=new ListNode();
                newnode=l2;
                currentptr->next=newnode;
                currentptr=newnode;
                l2=l2->next;
            }
            else{
                ListNode* newnode=new ListNode();
                newnode=l1;
                currentptr->next=newnode;
                currentptr=newnode;
                l1=l1->next;
            }
        }
        cout<<count;
        return head->next;
    }
};