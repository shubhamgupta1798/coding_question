/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> mp;
        int i=1;
        while(head!=NULL)
        {
            if(mp[head]>0)
            {
                //cout<<head->val;
                return head;
            }
            else{
                mp[head]=i;
            }
            i++;
            head=head->next;
        }
        return NULL;
    }
};