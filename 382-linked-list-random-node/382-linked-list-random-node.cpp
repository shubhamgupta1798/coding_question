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
    int max_len=0;
    ListNode* list;
    Solution(ListNode* head) {
        ListNode* temp=head;
        list=head;
        srand(time(NULL));
        while(temp!=NULL)
        {
            //a[max_len]=head->val;
            max_len++;
            
            temp=temp->next;
        }
    }
    
    int getRandom() {
        int rand_index = rand()%max_len;
        ListNode* ptr = list;
        for (int i=0; i<rand_index; i++) {
            ptr = ptr->next;
        }
        return ptr->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */