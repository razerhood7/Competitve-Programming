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
    int getDecimalValue(ListNode* head) {
        
        int count=1;
        ListNode *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        
        int pw=count-1,sum=0,nig=1;
        //return pw;
        while(head)
        {
            sum+=head->val*pow(2,pw);
            head=head->next;
            pw--;
        }
        return sum;
    }
};
