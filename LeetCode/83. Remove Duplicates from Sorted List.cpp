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
        if(head==NULL)
            return NULL;
        ListNode* dummy = head;
        ListNode* temp = head->next;
        while(temp!=NULL)
        {
            if(temp->val == head->val)
            {
                ListNode* pre = temp;
                temp = temp->next;
                head->next = temp;
            }
            else
            {
                temp = temp->next;
                head=head->next;
            }
        }
        return dummy;
    }
};
