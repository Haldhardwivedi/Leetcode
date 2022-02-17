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
        ListNode *temp1=head,*temp2;
        if(head!=NULL)
        {
            temp2=head->next;
        }
        else 
            temp2=NULL;
        while(temp2!=NULL)
        {
            int swap=temp1->val;
            temp1->val=temp2->val;
            temp2->val=swap;
            temp1=temp2->next;
            if(temp2->next!=NULL)
            temp2=(temp2->next)->next;
            else
                break;
        }
        return head;
    }
};